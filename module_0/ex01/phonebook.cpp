/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 15:10:41 by lsmit         #+#    #+#                 */
/*   Updated: 2020/11/22 16:43:26 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"

void		Person::ft_add()
{
	std::cout << "Please enter the first name\n";
	getline(std::cin, this->firstname);
	std::cout << "Please enter your last name\n";
	getline(std::cin, this->lastname);
	std::cout << "Please enter your nickname\n";
	getline(std::cin, this->nickname);
	std::cout << "Please enter your login\n";
	getline(std::cin, this->login);
	std::cout << "Please enter your postal address\n";
	getline(std::cin, this->postal);
	std::cout << "Please enter your email address\n";
	getline(std::cin, this->email);
	std::cout << "Please enter your phone number\n";
	getline(std::cin, this->number);
	std::cout << "Please enter your birthday\n";
	getline(std::cin, this->birthday);
	std::cout << "Please enter your favorite meal\n";
	getline(std::cin, this->meal);
	std::cout << "Please enter your underwear colour\n";
	getline(std::cin, this->underwear);
	std::cout << "Please enter your darkest secret (don't worry you can tell me)\n";
	getline(std::cin, this->secret);
	std::cout << "New person added to phonebook!\n\n" << "Please enter what you would like to do: ADD, SEARCH or EXIT\n";
}

std::string	ft_shorten(std::string str)
{
	size_t	len;
	std::string	sub;

	len = str.length();
	sub = str.substr(0, 10);
	if (len > 10)
		sub[9] = '.';
	return (sub);
}

void		Person::ft_list(int i)
{
	std::string	first;
	std::string	last;
	std::string	nick;

	first = ft_shorten(this->firstname);
	last = ft_shorten(this->lastname);
	nick = ft_shorten(this->nickname);
	std::cout << i << " | " << std::setw(10) << first << " | "<<std::setw(10) << last << " | " << std::setw(10) << nick << "\n\n";
}

int			ft_getindex(int persons)
{
	int				index;

	while (!(std::cin >> index) || index < 0 || index > persons)
	{
		std::cout << "Please enter a valid indexnumber\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (index >= 0 && index <= persons)
		return(index);
	return (0);
}

void		Person::ft_search()
{
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal << std::endl;
	std::cout << "Email address: " << this->email << std::endl;
	std::cout << "Phonenumber: " << this->number << std::endl;
	std::cout << "Birthday: " << this->birthday << std::endl;
	std::cout << "Favorite meal: " << this->meal << std::endl;
	std::cout << "Underwear colour: " << this->underwear << std::endl;
	std::cout << "Darkest secret: " << this->secret << "\n\n";
}

static void	ft_phonebook(int i, int index)
{
	Person		person[8];
	std::string	str;

	std::cout << "Please enter what you would like to do: ADD, SEARCH or EXIT\n";
	while(1)
	{
		std::cin.clear();
		std::cin.sync();
		getline(std::cin, str);
		while (1)
		{
			if (!str.compare("ADD"))
			{
				if (i == 8)
				{
					std::cout << "You have already reached the maximum of 8 persons to add to the phonebook\n";
					break;
				}
				person[i].ft_add();
				i++;
				break;
			}
			else if (!str.compare("SEARCH"))
			{
				for (int j = 0; j < i; j++)
					person[j].ft_list(j);
				std::cout << "Please enter an index\n";
				index = ft_getindex(i - 1);
				person[index].ft_search();
				break;
			}
			else if (!str.compare("EXIT"))
				return;
			else
			{
				std::cout << "Please enter a valid command: ADD, SEARCH OR EXIT.\n";
				break;
			}
		}
	}
}

int			main(int amount, char **input)
{
	input = NULL;
	if (amount > 1)
	{
		std::cout << "Please only call the program, don't put extra arguments behind it\n";
		return (0);
	}
	else
		ft_phonebook(0 , 0);
	return (0);
}
