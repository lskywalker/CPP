#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string const _name);
		ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap  &target);
		ClapTrap &operator= (const ClapTrap &target);

		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		name_;
		unsigned int	hitpoints_;
		unsigned int	energypoints_;
		unsigned int	attackdamage_;
};

#endif