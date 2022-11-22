#include "Form.hpp"

Form::Form(const std::string &name, int GradeToSign, int GradeToExecute) :
	_name(name), _isSigned(false), _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute)
{
	checkGrade();
}

Form::Form(const Form &copy) : _name(copy.getName()), _GradeToExecute(copy.getGradeToExecute()),
	_GradeToSign(copy.getGradeToSign()), _isSigned(copy.isSigned())
{
	*this = copy;
}

Form	&Form::operator=(Form const &copy)
{
	_isSigned = copy._isSigned;
	return (*this);
}

const std::string	&Form::getName( void ) const
{
	return (_name);
}

int		Form::getGradeToSign( void ) const
{
	return (_GradeToSign);
}

int		Form::getGradeToExecute( void ) const
{
	return (_GradeToExecute);
}

bool	Form::isSigned( void ) const
{
	return (_isSigned);
}

void	Form::checkExecuted(const Bureaucrat &bureaucrat) const
{
	if (_isSigned == false || bureaucrat.getGrade() < _GradeToExecute)
		throw CantExecute();
}

void	Form::checkGrade( void ) const
{
	if (_GradeToExecute < 1 || _GradeToSign < 1)
		throw GradeTooHighException();
	if (_GradeToExecute > 150 || _GradeToSign > 150)
		throw GradeTooLowException();
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _GradeToSign)
	{
		std::cout << _name << " has been signed by " << bureaucrat.getName() << std::endl;
		_isSigned = true;
		return true;
	}
	else
	{
		_isSigned = false;
		std::cout << _name << " can't be signed by " << bureaucrat.getName() << " because: ";
		throw GradeTooLowException();
		return false;
	}
}

Form::~Form()
{

}

std::ostream &operator<<(std::ostream &o, Form const &ref)
{
	o << ref.getName() << " to be signed by [" <<
			ref.getGradeToSign() << "] and executed by [" << ref.getGradeToExecute() << "]" << std::endl;
	return (o);
}
