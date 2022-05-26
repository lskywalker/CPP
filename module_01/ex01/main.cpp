/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:10:08 by lsmit         #+#    #+#                 */
/*   Updated: 2022/02/01 13:56:15 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*zombie;
	ZombieHorde	horde;

	std::srand(time(0));
	std::cout << "\nOh no... A horde of 20 zombies is incoming! RUN!!!!!!\n\n";
	zombie = zombieHorde(20, "Jesus");
	horde.announce(20, zombie);
	std::cout << "\nThat was close... Oh wait there is another 3 coming!\n\n";
	zombie = zombieHorde(3, "Sneaky bastard");
	horde.announce(3, zombie);
	return (0);
}
