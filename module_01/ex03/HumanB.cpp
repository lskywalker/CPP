/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:40 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/08 19:31:04 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	name(name)
{
}

void	HumanB::attack()
{
	weapon->getType().empty() ?
		std::cout << this->name << " attacks" << std::endl :
		std::cout << this->name << " attacks with " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
