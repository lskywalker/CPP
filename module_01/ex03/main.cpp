/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:20:43 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/08 19:46:25 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("a crossbow");
	bob.attack();
	}
	{
	Weapon club = Weapon();
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("a huge sword");
	jim.attack();
	}
	return (0);
}
