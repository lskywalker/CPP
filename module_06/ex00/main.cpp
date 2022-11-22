#include "Convert.hpp"

int		main(int amount, char *argv[])
{
	if (amount == 1)
	{
		std::cout << "Error: Wrong amount of parameters!" << std::endl;
		return (1);
	}

	Convert::convert(argv[1]);
	return (0);
}