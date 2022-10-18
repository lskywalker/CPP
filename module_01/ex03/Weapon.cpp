/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:01 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/13 17:23:36 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
	type()
{
}

Weapon::Weapon(std::string weaponType):
	type(weaponType)
{
}

const std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}