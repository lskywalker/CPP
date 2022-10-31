#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("Monster");
	ScavTrap	scav("Gorilla");

	frag.attack("Gorilla");
	scav.takeDamage(20);
	scav.beRepaired(1);
	scav.attack("Monster");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.attack("Gorilla");
	scav.takeDamage(20);
	scav.beRepaired(1);
	scav.attack("Monster");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.attack("Gorilla");
	scav.takeDamage(20);
	scav.beRepaired(1);
	scav.attack("Monster");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.attack("Gorilla");
	scav.takeDamage(20);
	scav.beRepaired(1);
	scav.attack("Monster");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.attack("Gorilla");
	scav.takeDamage(20);
	scav.beRepaired(1);
	scav.attack("Monster");
	frag.takeDamage(20);
	frag.beRepaired(10);
	
	return (0);
}
