/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 13:56:48 by lsmit         #+#    #+#                 */
/*   Updated: 2021/02/16 13:38:33 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <string>

class	Zombie
{
	public:
	std::string		type;
	std::string		name;

	void	announce(Zombie zombie);
	void	settype(std::string type);
	void	setname(std::string name);
};

#endif