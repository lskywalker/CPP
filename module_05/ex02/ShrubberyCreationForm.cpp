#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreation", "none", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form("ShrubberyCreation", target, 145, 137)
{
	std::cout << "Shrubbery Creation Form created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
Form(copy.getName(), copy.getTarget(), copy.getGradeToSign(), copy.getGradeToExecute())
{
	*this = copy;
	std::cout << "Shrubbery Creation Form copied!" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destroyed!" << std::endl;
}

void	ShrubberyCreationForm::formAction() const
{
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
	if (!out.is_open())
	{
		std::cerr << "Failed to open file!" << std::endl;
		return ;
	}
	out << "       _-_ " << std::endl;
	out << "    /~~   ~~\\ " << std::endl;
	out << " /~~         ~~\\ " << std::endl;
	out << "{               } " << std::endl;
	out << " \\  _-     -_  / " << std::endl;
	out << "   ~  \\ //  ~ " << std::endl;
	out << "_- -   | | _- _ " << std::endl;
	out << "  _ -  | |   -_ " << std::endl;
	out << "      // \\ " << std::endl;
	out.close();
}
