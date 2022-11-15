#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	std::cout << "\n========== BUREAUCRAT ==========\n" << std::endl;

	Bureaucrat *bob = new Bureaucrat("Bob", 2);
	try {
		std::cout << "1: " << *bob << std::endl;
		bob->increment();
		std::cout << "2: " << *bob << std::endl;
		bob->increment(5);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete bob;

	std::cout << std::endl;

	Bureaucrat *jim = new Bureaucrat("Jim", 10);
	try {
		std::cout << "1: " << *jim << std::endl;
		jim->increment();
		std::cout << "2: " << *jim << std::endl;
		jim->increment();
		std::cout << "3: " << *jim << std::endl;
		jim->increment();
		std::cout << "4: " << *jim << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete jim;

	std::cout << std::endl;

	Bureaucrat *james = new Bureaucrat("James", 145);
	try {
		std::cout << "1: " << *james << std::endl;
		james->decrement();
		std::cout << "2: " << *james << std::endl;
		james->decrement();
		std::cout << "3: " << *james << std::endl;
		james->decrement();
		std::cout << "4: " << *james << std::endl;
		james->decrement();
		std::cout << "5: " << *james << std::endl;
		james->decrement();
		std::cout << "6: " << *james << std::endl;
		james->decrement();
		std::cout << "7: " << *james << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete james;

	std::cout << std::endl;

	try {
		Bureaucrat jantje("Jantje", 151);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat jantje("Jantje", -1);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== FORM ==========\n" << std::endl;

	Bureaucrat* bob150 = new Bureaucrat("bob150", 150);
	Bureaucrat* kim140 = new Bureaucrat("kim140", 140);
	Bureaucrat* bas100 = new Bureaucrat("bas100", 100);
	Bureaucrat* luke1 = new Bureaucrat("Luke1", 1);

	std::cout << std::endl;

	std::cout << *bob150 << std::endl;
	std::cout << *kim140 << std::endl;
	std::cout << *bas100 << std::endl;
	std::cout << *luke1 << std::endl;

	std::cout << std::endl;

	std::cout << "CREATING INTERN:" << std::endl;
	Intern	*intern = new Intern();
	std::cout << std::endl;

	std::cout << "INTERN CREATES FORMS:" << std::endl;
	Form *shrubbery = intern->makeForm("Shrubbery Creation", "Shrubbery");
	std::cout << std::endl;
	Form *robotomy = intern->makeForm("Robotomy Request", "System");
	std::cout << std::endl;
	Form *presidential = intern->makeForm("Presidential Pardon", "Jack Sparrow");
	std::cout << std::endl;
	Form *doesnotexist = intern->makeForm("A very important form", "Joe");
	std::cout << std::endl;
	
	delete doesnotexist;
	delete intern;
	std::cout << std::endl;

	std::cout << *shrubbery << std::endl;
	std::cout << *robotomy << std::endl;
	std::cout << *presidential << std::endl;

	std::cout << std::endl;

	// ShrubberyCreationForm
	try { // try to execute before sign
		bas100->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // try to sign with low level
		bob150->signForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // sign
		kim140->signForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // try to execute with low level
		kim140->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		bas100->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// RobotomyRequestForm (execute main multiple times to check randomizer is working)
	try { // sign
		luke1->signForm(*robotomy);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		luke1->executeForm(*robotomy);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// PresidentialPardonForm
	try { // sign
		luke1->signForm(*presidential);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		luke1->executeForm(*presidential);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete shrubbery;
	delete robotomy;
	delete presidential;

	std::cout << std::endl;

	delete bob150;
	delete kim140;
	delete bas100;
	delete luke1;

	return (0);
}
