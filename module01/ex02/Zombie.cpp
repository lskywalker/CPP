/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 14:09:33 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 14:16:25 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	this->name = "Frankenstein";
	this->type = "Crazy zombie";
	this->emotion = "VERY HUNGRY!!!";
	std::cout << "<" << this->name << " " << this->type << "> Braiiiiiinnnsssss..." << std::endl;
}
