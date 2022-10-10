#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("Mario");

	claptrap.attack("Dickhead");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.takeDamage(7);
	claptrap.beRepaired(1);
	claptrap.takeDamage(10);
	claptrap.attack("Dickhead");
	return (0);
}