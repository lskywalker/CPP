/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 19:47:34 by lsmit         #+#    #+#                 */
/*   Updated: 2022/03/08 22:22:27 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	ft_replace(std::string oldstr, int i, int length, std::string replacewith)
{
	std::string str1;
	std::string	str2;
	
	str1 = oldstr.substr(0, i);
	str2 = oldstr.substr(i + length, oldstr.length());
	return (str1 + replacewith + str2);
}

int		main(int argc, char **argv)
{
	std::string		new_file;
	std::ifstream	file;
	std::ofstream	replacement;
	std::string		read;
	int				i = 0;

	if (argc != 4){
		std::cout << "Invalid input!\n";
		return (0);
	}
	file.open(argv[1]);
	
	if (!file){
		std::cout << "Unable to open file\n";
		return (0);
	}
	
	std::string		toreplace(argv[2]);
	std::string		replacewith(argv[3]);
	new_file.append(argv[1]);
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
			// read.replace(i, toreplace.length(), replacewith);
			read = ft_replace(read, i, toreplace.length(), replacewith);
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