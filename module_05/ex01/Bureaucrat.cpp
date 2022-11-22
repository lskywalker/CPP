#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name(""), _grade(1)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
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

void	Bureaucrat::signForm(Form &form) const
{
	if (form.beSigned(*this))
		std::cout << "<" << _name << "> signed " << form.getName() << std::endl;
	else
		std::cout << "<" << _name << "> couldn't sign " << form.getName() << " because grade is not high enough!" << std::endl;
}

bool	Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.checkExecuted(*this);
		std::cout << "<" << _name << "> executes form " << form.getName() << std::endl;
		return true;
	}
	catch(Form::CantExecute &e)
	{
		std::cout << e.what() << std::endl;
		return false;
	}
	
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &ref)
{
	o << ref.getName() << "[" << ref.getGrade() << "]" << std::endl;
	return(o);
}
