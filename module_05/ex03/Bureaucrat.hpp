#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string		const _name;
		int				_grade;

		Bureaucrat( void );
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &copy);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		increment(int value);
		void		decrement(int value);
		void		signForm(Form &form) const;
		bool		executeForm(const Form &form) const;

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
};

	std::ostream &	operator<<(std::ostream & o, Bureaucrat const & ref);

#endif