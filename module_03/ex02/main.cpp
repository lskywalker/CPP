#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("Monster");

	frag.attack("Zombie");
	frag.takeDamage(8);
	frag.beRepaired(5);
	frag.attack("Zombie");
	frag.takeDamage(46);
	frag.beRepaired(20);
	frag.attack("Zombie");
	frag.highFivesGuys();
	frag.attack("Zombie");
	frag.takeDamage(80);
	frag.attack("Zombie");
	return (0);
}
