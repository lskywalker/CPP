/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:13:51 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 14:59:20 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
