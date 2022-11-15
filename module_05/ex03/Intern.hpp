#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		typedef struct s_forms
		{
			std::string name;
			Form		*formClass;
		}	t_form;

	public:
		Intern();
		Intern(const Intern &copy);
		Intern	&operator=(const Intern &copy);
		~Intern();

		Form	*makeForm(std::string formName, std::string target);
};

#endif