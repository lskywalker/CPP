#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
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
		std::cout << "ScavTrap [" << name_ << "]";
		std::cout << " I'm dying!" << std::endl;
		return ;
	}
	if (energypoints_ == 0)
	{
		std::cout << "ScavTrap [" << name_ << "]";
		std::cout << "Not enough enery to attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap [" << name_ << "]";
	energypoints_ -= 1;
	std::cout << " attacks [" << target << "], ";
	std::cout << "causing : " << attackdamage_ << " damage! ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}
