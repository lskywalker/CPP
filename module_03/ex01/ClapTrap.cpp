#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitpoints_(10), energypoints_(10), attackdamage_(0)
{
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage) : name_(name), hitpoints_(hitpoints), energypoints_(energypoints), attackdamage_(attackdamage)
{
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_(name), hitpoints_(10), energypoints_(10), attackdamage_(0)
{
	std::cout << "ClapTrap [" << name << "] has been created!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	if (name_ != "")
		std::cout << "ClapTrap [" << name_ << "] has been destroyed!" << std::endl;
	else
		std::cout << "ClapTrap destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &target) : name_(target.name_), hitpoints_(target.hitpoints_),
						energypoints_(target.energypoints_), attackdamage_(target.attackdamage_)
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &target)
{
	name_ = target.name_;
	hitpoints_ = target.hitpoints_;
	energypoints_ = target.energypoints_;
	attackdamage_ = target.attackdamage_;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (hitpoints_ <= 0)
	{
		std::cout << "ClapTrap [" << name_ << "]";
		std::cout << " I'm dying!" << std::endl;
		return ;
	}
	if (energypoints_ == 0)
	{
		std::cout << "ClapTrap [" << name_ << "]";
		std::cout << "Not enough enery to attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap [" << name_ << "]";
	energypoints_ -= 1;
	std::cout << " attacks [" << target << "], ";
	std::cout << "causing : " << attackdamage_ << " damage! ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints_ < amount)
		hitpoints_ = 0;
	else
		hitpoints_ -= amount;
	std::cout << "ClapTrap [" << name_ << "]";
	std::cout << " takes: " << amount << " damage! ";
	std::cout << "HP (" << hitpoints_ << ")" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	hitpoints_ += amount;

	std::cout << "ClapTrap [" << name_ << "]";
	energypoints_ -= 1;
	std::cout << " has been healed by: " << amount << "! ";
	std::cout << "HP (" << hitpoints_ << "), ";
	std::cout << "Energypoints (" << energypoints_ << ")" << std::endl;
}
