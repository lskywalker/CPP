/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:13:57 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 11:59:08 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		zombie;
	ZombieEvent	zombie_e;

	std::cout << "This is the pre made Zombie\n";
	zombie.name = "Frankenstein";
	zombie.type = "Crawler";
	zombie.announce();
	std::cout << "\nThis is the new zombie with a random name\n";
	zombie_e.randomChump();
	return (0);
}
