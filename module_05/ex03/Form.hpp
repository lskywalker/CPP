#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_isSigned;
		const int			_GradeToSign;
		const int			_GradeToExecute;

	public:
		Form();
		Form(const std::string &name, const std::string &target, int GradeToSign, int GradeToExecute);
		Form(const Form &copy);
		virtual ~Form();

		Form 	&operator=(const Form &copy);
	
		const std::string	&getName( void ) const;
		const std::string	&getTarget( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				isSigned( void ) const;
		void				checkGrade( void ) const;
		void				checkExecuted(const Bureaucrat &bureaucrat) const;
		bool				beSigned(const Bureaucrat &bureaucrat);

		virtual void		execute( void ) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too High!");
				}
				
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too Low!");
				}
				
		};
		class CantExecute : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form is nog signed!");
				}
		};
};

	std::ostream &	operator<<(std::ostream &o, Form const &ref);

#endif