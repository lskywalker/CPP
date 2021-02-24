/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 13:44:57 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/17 14:05:22 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string		str("HI THIS IS BRAIN");
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
    return (0);
}