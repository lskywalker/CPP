/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:21:33 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/13 17:16:37 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(std::string name, Weapon &weapon);
		std::string	name;
		void		attack();
		Weapon		&weapon;
};

#endif