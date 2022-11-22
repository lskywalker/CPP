#include "Form.hpp"

Form::Form() :
	_name("Form"),
	_target("none"),
	_isSigned(false),
	_GradeToSign(150),
	_GradeToExecute(150)
{
}

Form::Form(const std::string &name, const std::string &target, int GradeToSign, int GradeToExecute) :
	_name(name),
	_target(target),
	_isSigned(false),
	_GradeToSign(GradeToSign),
	_GradeToExecute(GradeToExecute)
{
	checkGrade();
}

Form::Form(const Form &copy) :
	_name(copy.getName()),
	_target(copy.getTarget()),
	_isSigned(copy.isSigned()),
	_GradeToSign(copy.getGradeToSign()),
	_GradeToExecute(copy.getGradeToExecute())
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

const std::string	&Form::getTarget( void ) const
{
	return(_target);
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
	if (_isSigned == false)
	{
		std::cout << _name << " can't be executed by " << bureaucrat.getName() << " because: ";
		throw CantExecute();
	}
	if (bureaucrat.getGrade() > _GradeToExecute)
	{
		std::cout << _name << " can't be executed by " << bureaucrat.getName() << " because: ";
		throw GradeTooLowException();
	}
	this->formAction();
	
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

void	Form::execute(const Bureaucrat &executor) const
{
	executor.executeForm(*this);
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
