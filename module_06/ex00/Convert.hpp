#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string.h>

class Convert
{
	public:
		~Convert();

		static void	convert(const std::string &literal);
	private:
		Convert();
		Convert(const Convert &copy);
		Convert	&operator=(const Convert &copy);
};

#endif