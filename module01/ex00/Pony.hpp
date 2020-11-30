/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 11:36:43 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/28 17:19:17 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP

# define PONY_HPP

# include <iostream>

class	Pony
{
	public:
	std::string		name;
	void	eat(std::string food);
};

#endif