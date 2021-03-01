/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 12:45:11 by lsmit         #+#    #+#                 */
/*   Updated: 2021/03/01 16:58:28 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

int		main(int amount, char **input)
{
	std::string		new_file;
	std::ifstream	file;
	std::ofstream	replacement;
	std::string		read;
	int				i = 0;

	if (amount != 4){
		std::cout << "Invalid input!\n";
		return (0);
	}
	file.open(input[1]);
	
	if (!file){
		std::cout << "Unable to open file\n";
		return (0);
	}
	std::string		toreplace(input[2]);
	std::string		replacewith(input[3]);
	new_file.append(input[1]);
	new_file.append(".replace");
	replacement.open(new_file, std::ios::trunc);
	if (!replacement){
		std::cout << "File failed to open!\n";
		return (0);
	}
	while (!file.eof()){
		i = 0;
		std::getline(file, read);
		while (read.find(toreplace, i) != read.npos){
			i = read.find(toreplace, i);
			if (i == read.npos)
				break ;
			read.replace(i, toreplace.length(), replacewith);
			i += replacewith.length();
		}
		replacement << read;
		if (!file.eof())
			replacement << std::endl;
	}
	replacement.close();
	file.close();
	return (0);
}
