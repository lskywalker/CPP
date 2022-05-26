/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lukesmit <lukesmit@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 14:35:52 by lukesmit      #+#    #+#                 */
/*   Updated: 2020/11/14 14:59:32 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int     main(int amount, char **argv)
{
	int i;

	i = 1;
	if (amount == 1)
		std::cout  << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (i < amount)
		{
			argv[i] = ft_toupper(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return(0);
}
