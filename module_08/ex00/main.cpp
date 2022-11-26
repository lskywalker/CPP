#include "easyfind.hpp"

int	main()
{
	std::vector<int>	test;
	std::list<int>		test2;

	test.push_back(10);
	test.push_back(21);
	test.push_back(42);

	test2.push_back(8);
	test2.push_back(16);
	test2.push_back(25);
	test2.push_back(64);

	try
	{
		std::cout << easyfind(test, 42) << std::endl;
		std::cout << easyfind(test, 10) << std::endl;
		std::cout << easyfind(test2, 8) << std::endl;
		std::cout << easyfind(test2, 5) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}