/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:08:20 by lsmit         #+#    #+#                 */
/*   Updated: 2022/10/13 17:03:04 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie  zombie("Frankiestein");

    zombie.announce();
    randomChump("Jordan");
    return (1);
}
