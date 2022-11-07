#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name(""), _grade(1)
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) 
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::increment()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void		Bureaucrat::decrement()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void		Bureaucrat::increment(int value)
{
	if ((_grade - value) < 1)
		throw GradeTooHighException();
	else
		_grade -= value;
}

void		Bureaucrat::decrement(int value)
{
	if ((_grade + value) > 150)
		throw GradeTooLowException();
	else
		_grade += value;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &ref)
{
	o << "<" << ref.getName() << ">, grade: " << ref.getGrade();
	return(o);
}
