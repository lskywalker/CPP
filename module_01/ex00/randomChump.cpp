/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:09:33 by lsmit         #+#    #+#                 */
/*   Updated: 2022/01/25 18:47:25 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie *zomb = newZombie(name);
    zomb->announce();
    delete zomb;
}