/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:06:20 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 17:10:38 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class		HumanB{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string newName);
		void	attack();
		void	setWeapon(Weapon &newWeapon);
};

#endif