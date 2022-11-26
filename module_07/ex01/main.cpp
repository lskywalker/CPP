#include "iter.hpp"

template<typename T>
void	ft_print(const T &var)
{
	std::cout << var << std::endl;
}

int		main(void)
{
	std::string	strarray[3] = {
		"First string",
		"Another string",
		"Last string"
	};
	std::size_t	numarray[5] = {5, 10, 2, 8, 1};

	std::cout << "STRING ARRAY TEST:" << std::endl;
	::iter(strarray, 3, ft_print);
	std::cout << std::endl;
	std::cout << "NUMBER ARRAY TEST:" << std::endl;
	::iter(numarray, 5, ft_print);

	return (0);
}
