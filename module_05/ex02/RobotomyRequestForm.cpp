#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("Robotomy Creation", "none", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form("RobotomyCreation", target, 72, 45)
{
	std::cout << "Robotomy Creation Form created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	std::cout << "Robotomy Creation Form copied!" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Creation Form destroyed!" << std::endl;
}

void	RobotomyRequestForm::execute() const
{
	std::srand(std::time(NULL));

	std::cout << " * some drilling noise * " << std::endl;
	if ((std::rand() % 2) == 0)
		std::cout << this->getTarget() << " has been robotomized succesfully!" << std::endl;
	else
		std::cout << this->getTarget() << " failed to robotomize!" << std::endl;
}