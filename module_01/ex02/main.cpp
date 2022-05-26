/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/03 20:05:22 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/03 21:48:50 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	*str = new std::string("HI THIS IS BRAIN");
	std::string	*stringPTR;
	std::string	stringREF;

	stringPTR = str;
	stringREF = *str;
	std::cout << &str << std::endl << &stringPTR << std::endl << &stringREF << std::endl << std::endl;
	std::cout << *str << std::endl << *stringPTR << std::endl << stringREF << std::endl;
}
