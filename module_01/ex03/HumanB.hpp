/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:48 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/18 13:28:01 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{
	public:
		HumanB(std::string name);
		~HumanB();
		void		setWeapon(Weapon &newWeapon);
		std::string	name;
		void		attack();
		Weapon		*weapon;
};

#endif