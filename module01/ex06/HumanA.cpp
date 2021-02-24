/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:05:37 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 16:27:57 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon):
	name(newName), weapon(&newWeapon)
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
