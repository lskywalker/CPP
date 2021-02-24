/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:09:33 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 13:36:58 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	Zombie::settype(std::string type)
{
	this->type = type;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::announce(Zombie zombie)
{
	std::cout << "<" << zombie.name << " " << zombie.type << "> I want some good juicy brainsssss..." << std::endl;
}
