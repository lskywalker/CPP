/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:06:08 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 16:54:45 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class		HumanA{
	public:
		HumanA(std::string newName, Weapon &newWeapon);
		void	attack();
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif