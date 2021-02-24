/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/17 14:24:06 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 14:44:41 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class	Brain{
	public:	
		std::string		identify();
	private:
		int		IQ;
};

#endif