/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:10:51 by lsmit         #+#    #+#                 */
/*   Updated: 2022/01/25 18:43:29 by lsmit         ########   odam.nl         */
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
        void    announce(void);
        Zombie();
        Zombie(std::string);
        ~Zombie();
};
        Zombie  *newZombie(std::string name);
        void    randomChump(std::string name);
#endif