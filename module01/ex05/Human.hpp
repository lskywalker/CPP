/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 12:11:13 by lukesmit      #+#    #+#                 */
/*   Updated: 2021/02/24 15:04:21 by lukesmit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class	Human
{
	public:
		std::string		identify();
		Brain&			getBrain();
	private:
		Brain			brain;
		std::string		name;
};

#endif