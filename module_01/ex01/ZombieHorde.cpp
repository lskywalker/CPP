/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:10:33 by lsmit         #+#    #+#                 */
/*   Updated: 2022/02/01 13:48:12 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie [N];
	if (zombie == nullptr)
	{
		std::cout << "Oh no this horde is too big!\n";
		exit(1);
	}
	for (int i = 0; i < N; i++)
		zombie[i].setname(name);
	return (zombie);
}

void    ZombieHorde::announce(int N, Zombie *zombie)
{
    for (int i = 0; i < N; i++)
	{
		zombie->announce(zombie[i]);
	}
}
