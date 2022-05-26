/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:10:23 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/03 19:55:16 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::announce(Zombie zombie)
{
	std::cout << zombie.name << ": I want some good juicy brainsssss..." << std::endl;
}