/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 16:20:43 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/18 13:36:03 by lsmit         ########   odam.nl         */
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
	Weapon club = Weapon("AXE");
	HumanB jim("Jim");
	// jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("a huge sword");
	jim.attack();
	}
	return (0);
}
