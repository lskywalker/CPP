/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 18:02:38 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 18:02:43 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP

# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent
{
	public:
	void	setZombieType();
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump();
}

#endif
