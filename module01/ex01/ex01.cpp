/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:50:59 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 13:54:15 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
}
