/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 11:36:45 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 18:00:41 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony(void)
{
	std::cout << "Pony " << name << " was destroyed!" << std::endl;
}

void	Pony::eat(std::string food)
{
	if (food == "chocolate")
		std::cout << "No stop, " << food << " is not healthy for the Pony :(" << std::endl;
	else
		std::cout << "Pony " << name << " is eating " << food << std::endl;
}
