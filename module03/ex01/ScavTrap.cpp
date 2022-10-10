#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	hitpoints_ = 100;
	energypoints_ = 50;
	attackdamage_ = 20;
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name);
{
	name_ = name;
	hitpoints_ = 100;
	energypoints_ = 50;
	attackdamage_ = 20;
	std::cout << "ScavTrap [" << name << "] has been created!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	if (name_ != "")
		std::cout << "ScavTrap [" << name_ << "] has been destroyed!" << std::endl;
	else
		std::cout << "ScavTrap destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap [" << name_ << "] is now in Gatekeeper mode!" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (hitpoints_ <= 0)
	{
		printname();
		std::cout << " I'm dying!" << std::endl;
		return ;
	}
	if (energypoints_ == 0)
	{
		printname();
		std::cout << "Not enough enery to attack!" << std::endl;
		return ;
	}
	printname();
	energypoints_ -= 1;
	std::cout << " attacks [" << target << "], ";
	std::cout << "causing : " << attackdamage_ << " damage! ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hitpoints_ < amount)
		hitpoints_ = 0;
	else
		hitpoints_ -= amount;
	printname();
	std::cout << " takes: " << amount << " damage! ";
	std::cout << "HP (" << hitpoints_ << ")" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	hitpoints_ += amount;

	printname();
	energypoints_ -= 1;
	std::cout << " has been healed by: " << amount << "! ";
	std::cout << "HP (" << hitpoints_ << "), ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}

void	ScavTrap::printname(void)
{
	std::cout << "ScavTrap [" << name_ << "]";
}