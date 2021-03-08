/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:09:33 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 11:48:15 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	Zombie::settype(std::string type)
{
	this->type = type;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " " << this->type << "> I want some good juicy brainsssss..." << std::endl;
}
