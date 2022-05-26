/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:10 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/08 16:55:42 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	private:
		std::string			type;
	public:
		Weapon();
		Weapon(std::string weaponType);
		const std::string	getType();
		void				setType(std::string newType);
};

#endif