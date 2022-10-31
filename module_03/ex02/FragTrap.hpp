#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		~FragTrap();

		void	highFivesGuys();
		void	attack(const std::string &target);
};

#endif