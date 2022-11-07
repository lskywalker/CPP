#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	Jim("Jim", 10);
	Bureaucrat	James("James", 80);
	Form		climateBill("Climate bill", 20, 30);
	
	std::cout << Jim << James << climateBill << std::endl;
	
	try
	{
		climateBill.beSigned(James);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	James.increment(70);
	std::cout << "Now we increment James his grade by 70" << std::endl << James << std::endl;

	try
	{
		climateBill.beSigned(James);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{	
		climateBill.beSigned(Jim); 
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
