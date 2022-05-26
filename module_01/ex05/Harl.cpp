/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 16:30:46 by lsmit         #+#    #+#                 */
/*   Updated: 2022/05/26 15:31:43 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (map[i].name == level)
			(this->*(map[i].ptr))();
	}
}

Harl::Harl(void)
{
	init();
}

void	Harl::init(void)
{
	map[0].name = "debug";
	map[0].ptr = &Harl::debug;
	map[1].name = "info";
	map[1].ptr = &Harl::info;
	map[2].name = "warning";
	map[2].ptr = &Harl::warning;
	map[3].name = "error";
	map[3].ptr = &Harl::error;
}
