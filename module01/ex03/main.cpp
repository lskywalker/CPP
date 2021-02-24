/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:13:57 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 13:34:53 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde	zombie;
	
	std::srand(time(0));
	std::cout << "\nOh no... A horde of 20 zombies is incoming! RUN!!!!!!\n\n";
	zombie.Horde(20);
	std::cout << "\nThat was close... Oh wait there is another 3 coming!\n\n";
	zombie.Horde(3);
	return (0);
}
