/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:05:14 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 17:12:04 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
    type("Bayonet")
{
}

Weapon::Weapon(std::string weaponType):
    type(weaponType)
{
}

const std::string   Weapon::getType()
{
    return(type);
}

void    Weapon::setType(std::string newType)
{
    type = newType;
}