#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		virtual ~FragTrap();

		void	highFivesGuys(void);
		void	printname();
		virtual void	attack(const std::string &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
	private:
		std::string		name_;
		unsigned int	hitpoints_;
		unsigned int	energypoints_;
		unsigned int	attackdamage_;
};


#endif