#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_GradeToSign;
		const int			_GradeToExecute;

	public:
		Form(const std::string &name, int GradeToSign, int GradeToExecute);
		Form(const Form &copy);
		~Form();

		Form 	&operator=(const Form &copy);
	
		const std::string	&getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				isSigned( void ) const;
		void				checkGrade( void ) const;
		void				checkExecuted(const Bureaucrat &bureaucrat) const;
		bool				beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade To Sign is too High!");
				}
				
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade To Sign is too Low!");
				}
				
		};
		class CantExecute : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Can't execute the form!");
				}
		};
};

	std::ostream &	operator<<(std::ostream &o, Form const &ref);

#endif