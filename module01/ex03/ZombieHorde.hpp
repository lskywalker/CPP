/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:56:48 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 13:38:22 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP

# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{
	public:
	void		announce(int N, Zombie *horde);
	void		Horde(int N);
};

#endif