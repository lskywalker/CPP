/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:17:19 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 11:50:49 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	random_name()
{
	int			index = 0;
	std::string	name[8];

	name[0] = "Keisha";
	name[1] = "Becky";
	name[2] = "Abel";
	name[3] = "Ingmar";
	name[4] = "Remco";
	name[5] = "Digga D";
	name[6] = "Drake";
	name[7] = "Jones";
	std::srand(time(0));
	index = std::rand() % 8;
	return(name[index]);
}

void	ZombieEvent::randomChump()
{
	Zombie	*zombie;

	zombie = newZombie(random_name());
	zombie->announce();
	delete zombie;
}

void	ZombieEvent::setZombieType(Zombie *zombie)
{
	zombie->type = "Night Hunter";
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie;
	new_zombie->setname(name);
	setZombieType(new_zombie);
	return (new_zombie);
}
