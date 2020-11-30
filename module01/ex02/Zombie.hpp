/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:56:48 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/30 14:15:36 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
	std::string	type;
	std::string	name;
	std::string	emotion;
	
	void	announce();
};

#endif
