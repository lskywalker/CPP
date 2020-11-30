/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:17:19 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 18:26:12 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie zombie = new Zombie("Crazy zombie", name);
	;
}