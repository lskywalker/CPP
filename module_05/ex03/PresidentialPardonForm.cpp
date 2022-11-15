#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("Presidential Pardon", "none", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("Presidential Pardon", target, 25, 5)
{
	std::cout << "Presidential Pardon Form created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	std::cout << "Presidential Pardon Form copied!" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form destroyed!" << std::endl;
}

void	PresidentialPardonForm::execute() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
