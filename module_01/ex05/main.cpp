/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 16:30:35 by lsmit         #+#    #+#                 */
/*   Updated: 2022/05/26 15:30:56 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(void)
{
    Harl    h;
    
    h.complain("debug");
    h.complain("info");
    h.complain("warning");
    h.complain("error");
    return (0);
}