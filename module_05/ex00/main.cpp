#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat	joe = Bureaucrat("Joe", 1);
		std::cout << joe << std::endl;
		joe.decrement(30);
		std::cout << joe << std::endl;
		joe.increment(29);
		std::cout << joe << std::endl;
		joe.increment();
		std::cout << joe << std::endl;
		joe.increment();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		jack = Bureaucrat("Jack", 150);
		std::cout << jack << std::endl;
		jack.increment(80);
		std::cout << jack << std::endl;
		jack.decrement(70);
		std::cout << jack << std::endl;
		jack.decrement(6);
		std::cout << jack << std::endl;
		jack.decrement(500);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		john = Bureaucrat("John", 0);
		std::cout << john << std::endl;
		john.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		jillian = Bureaucrat("Jillian", 151);
		std::cout << jillian << std::endl;
		jillian.increment();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
