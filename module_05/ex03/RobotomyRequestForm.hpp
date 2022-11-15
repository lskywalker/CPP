#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm( void );
	
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm( void );

	void	execute( void ) const;
};

#endif
