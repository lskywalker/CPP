/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 17:41:07 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/21 19:16:07 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP


# include <iostream>
# include <string>
# include <iomanip>

class Person
{
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		login;
	std::string		postal;
	std::string		email;
	std::string		number;
	std::string		birthday;
	std::string		meal;
	std::string		underwear;
	std::string		secret;
public:
void		ft_add();
void		ft_list(int i);
void		ft_search();
};

#endif
