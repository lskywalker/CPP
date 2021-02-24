/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:14:06 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 14:53:55 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string     Brain::identify()
{
    unsigned long   address = (unsigned long)this;

    return("0x" + std::to_string(address));
}
