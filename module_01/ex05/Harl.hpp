/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 16:30:51 by lsmit         #+#    #+#                 */
/*   Updated: 2022/05/26 15:28:32 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	typedef struct s_status
	{
		std::string	name;
		void(Harl::*ptr)(void);	
	}	t_status;
	
	private:
		t_status	map[4];
		void	debug();
		void	info();
		void	warning();
		void	error();

		void	init();
	public:
    	void	complain(std::string level);
		Harl(void);
};

#endif