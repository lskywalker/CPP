/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:14:00 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 14:56:33 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

std::string     Human::identify()
{
    return(this->brain.identify());
}

Brain&          Human::getBrain()
{
    return (this->brain);
}
