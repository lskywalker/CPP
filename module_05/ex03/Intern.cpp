#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created!" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "Intern copied!" << std::endl;
}

Intern	&Intern::operator=(const Intern &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed!" << std::endl;
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	Form	*ret = NULL;
	t_form	forms[3] = {
		{"Shrubbery Creation", new ShrubberyCreationForm(target)},
		{"Robotomy Request", new RobotomyRequestForm(target)},
		{"Presidential Pardon", new PresidentialPardonForm(target)}
	};

	for(int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName)
			ret = forms[i].formClass;
		else
			delete forms[i].formClass;
	}
	if (ret != NULL)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "Intern was not able to find " << formName << std::endl;
	return (ret);
}