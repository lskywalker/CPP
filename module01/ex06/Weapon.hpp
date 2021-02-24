/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:05:23 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 17:14:14 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class	Weapon{
	private:
		std::string			type;
	public:
		Weapon();
		Weapon(std::string weaponType);
		const std::string	getType();
		void				setType(std::string newType);
};

#endif
