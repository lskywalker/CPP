/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:08:43 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/13 17:10:15 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->name << " DIED" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
}

void    Zombie::announce()
{
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std ::endl;
}
