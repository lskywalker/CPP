/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:06:29 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 17:36:18 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int		main()
{
	{
	Weapon club = Weapon("crude spriked club");
	HumanA mishka("Mishka", club);
	mishka.attack();
	club.setType("some other type of club");
	mishka.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB puffie("Puffie");
	puffie.setWeapon(club);
	puffie.attack();
	club.setType("some other type of club");
	puffie.attack();
	}
}

