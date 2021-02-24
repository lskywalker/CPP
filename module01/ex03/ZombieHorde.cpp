/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 12:22:06 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/16 13:41:41 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	random_name()
{
	int			index = 0;
	std::string	name[20];

	name[0] = "Keisha";
	name[1] = "Becky";
	name[2] = "Abel";
	name[3] = "Ingmar";
	name[4] = "Remco";
	name[5] = "Digga D";
	name[6] = "Drake";
	name[7] = "Jones";
	name[8] = "Frankenstina";
	name[9] = "Deamon";
	name[10] = "NitWit";
	name[11] = "Devourer";
	name[12] = "Famish";
	name[13] = "Gnaw";
	name[14] = "George";
	name[15] = "Rancie";
	name[16] = "Gutsie";
	name[17] = "Guzzle";
	name[18] = "Starvie";
	name[19] = "Piggie";
	index = std::rand() % 20;
	return(name[index]);
}

void	ZombieHorde::Horde(int N)
{
	Zombie	*zombie;

	zombie = new Zombie [N];
	if (zombie == nullptr)
	{
		std::cout << "Oh no this horde is too big!\n";
		exit(1);
	}
	for (int i = 0; i < N; i++)
	{
		zombie[i].setname(random_name());
		zombie[i].settype("Night Hunter");
	}
	announce(N, zombie);
	delete[] zombie;
}

void	ZombieHorde::announce(int N, Zombie *horde)
{
	for (int i = 0; i < N; i++)
	{
		horde[i].announce(horde[i]);
	}
}
