#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	hitpoints_ = 100;
	energypoints_ = 100;
	attackdamage_ = 30;
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	name_ = name;
	hitpoints_ = 100;
	energypoints_ = 100;
	attackdamage_ = 30;
	std::cout << "FragTrap [" << name << "] has been created!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (name_ != "")
		std::cout << "FragTrap [" << name_ << "] has been destroyed!" << std::endl;
	else
		std::cout << "FragTrap destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap gives high fives!" << std::endl;
}

void	FragTrap::attack(std::string const &target)
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
	energypoints_ -= 10;
	std::cout << " attacks [" << target << "], ";
	std::cout << "causing : " << attackdamage_ << " damage! ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (hitpoints_ < amount)
		hitpoints_ = 0;
	else
		hitpoints_ -= amount;
	printname();
	std::cout << " takes: " << amount << " damage! ";
	std::cout << "HP (" << hitpoints_ << ")" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	hitpoints_ += amount;

	printname();
	energypoints_ -= 10;
	std::cout << " has been healed by: " << amount << "! ";
	std::cout << "HP (" << hitpoints_ << "), ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}

void	FragTrap::printname(void)
{
	std::cout << "FragTrap [" << name_ << "]";
}