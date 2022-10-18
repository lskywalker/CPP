/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:26 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/13 17:16:57 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
	name(name), weapon(weapon)
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with " << weapon.getType() << std::endl;
}
