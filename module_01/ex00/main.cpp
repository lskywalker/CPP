/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:08:20 by lsmit         #+#    #+#                 */
/*   Updated: 2022/01/25 18:43:54 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie  zombie("Frankiestein");

    zombie.announce();
    randomChump("Jood");
    return (1);
}
