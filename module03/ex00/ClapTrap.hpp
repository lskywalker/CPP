#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string const _name);
		~ClapTrap();
		ClapTrap(const ClapTrap  &target);
		ClapTrap &operator= (const ClapTrap &target);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	private:
		std::string		name_;
		unsigned int	hitpoints_;
		unsigned int	energypoints_;
		unsigned int	attackdamage_;

		void		printname();
};

#endif