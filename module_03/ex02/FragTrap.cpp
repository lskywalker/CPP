#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("", 100, 50, 20)
{
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap [" << name << "] has been created!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (name_ != "")
		std::cout << "FragTrap [" << name_ << "] has been destroyed!" << std::endl;
	else
		std::cout << "FragTrap destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap [" << name_ << "] wants a high five!" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (hitpoints_ <= 0)
	{
		std::cout << "FragTrap [" << name_ << "]";
		std::cout << " I'm dying!" << std::endl;
		return ;
	}
	if (energypoints_ == 0)
	{
		std::cout << "FragTrap [" << name_ << "]";
		std::cout << "Not enough enery to attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap [" << name_ << "]";
	energypoints_ -= 1;
	std::cout << " attacks [" << target << "], ";
	std::cout << "causing : " << attackdamage_ << " damage! ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}
