#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("Gorilla");

	scav.attack("Zombie");
	scav.takeDamage(8);
	scav.beRepaired(5);
	scav.attack("Zombie");
	scav.takeDamage(46);
	scav.beRepaired(20);
	scav.attack("Zombie");
	scav.guardGate();
	scav.attack("Zombie");
	scav.takeDamage(80);
	scav.attack("Zombie");
	return (0);
}
