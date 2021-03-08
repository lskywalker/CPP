/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 18:02:38 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 11:30:40 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP

# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent
{
	public:
	void			setZombieType(Zombie *zombie);
	Zombie*			newZombie(std::string name);
	void			randomChump();
};

#endif
