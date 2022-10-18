/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:40 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/18 13:34:49 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
