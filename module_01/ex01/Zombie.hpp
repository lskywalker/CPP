/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:11:19 by lsmit         #+#    #+#                 */
/*   Updated: 2022/02/01 13:52:23 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

	class Zombie
	{
		private:
			std::string  name;
		public:
			void    announce(Zombie zombie);
			Zombie();
			~Zombie();
			void    setname(std::string);
    };

	class	ZombieHorde
	{
		public:
		void		announce(int N, Zombie *zombie);
	};
		Zombie		*zombieHorde(int N, std::string name);
#endif