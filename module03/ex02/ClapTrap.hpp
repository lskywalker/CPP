#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string const _name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap  &target);
		ClapTrap &operator= (const ClapTrap &target);

		virtual void	attack(const std::string &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

	private:
		std::string		name_;
		unsigned int	hitpoints_;
		unsigned int	energypoints_;
		unsigned int	attackdamage_;

		virtual void		printname();
};

#endif