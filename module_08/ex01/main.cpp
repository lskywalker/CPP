#include "Span.hpp"

int		main(void)
{
	std::cout << "NORMAL TEST:" << std::endl;
	try
	{
		Span	s(5);
		s.addNumber(2);
		s.addNumber(5);
		s.addNumber(10);
		s.addNumber(42);
		s.addNumber(256);
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "FULL EXCEPTION TEST:" << std::endl;
	try
	{
		Span	s(5);
		s.addNumber(2);
		s.addNumber(5);
		s.addNumber(10);
		s.addNumber(42);
		s.addNumber(256);

		s.addNumber(12);
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "TOO SMALL EXCEPTION TEST:" << std::endl;
	try
	{
		Span	s(5);
		s.addNumber(2);
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "BIG NUMBER TEST:" << std::endl;
	std::vector<int>	big(100000);
	for (int i = 0; i < 100000; i++)
		big[i] = i;
	try
	{
		Span	s(100000);
		s.addRange(big.begin(), big.end());
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl << std::endl;
		std::cout << "Adding 1 more number for Full Exception with big amount of numbers: " << std::endl;
		s.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}