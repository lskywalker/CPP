/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 11:36:40 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 13:54:54 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	std::cout << "Starting Pony on the Stack" << std::endl;
	Pony	pony;

	pony.name = "Tornado";
	std::cout << "Giving a carrot." << std::endl;
	pony.eat("carrot");
	std::cout << "Giving chocolate." << std::endl;
	pony.eat("chocolate");
	std::cout << "Leaving Pony on the stack" << std::endl;
}

void	ponyOnTheHeap()
{
	std::cout << "Starting Pony on the Heap" << std::endl;
	Pony	*pony = new Pony;

	pony->name = "Tornado";
	std::cout << "Giving a carrot." << std::endl;
	pony->eat("carrot");
	std::cout << "Giving chocolate." << std::endl;
	pony->eat("chocolate");
	delete pony;
	std::cout << "Leaving Pony on the Heap\n" << std::endl;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}