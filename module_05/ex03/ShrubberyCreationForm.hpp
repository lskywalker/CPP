#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include<fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm( void );

	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm( void );

	void	formAction( void ) const;
};

#endif