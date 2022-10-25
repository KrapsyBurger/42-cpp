#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("unknown"), signing_grade(0), exec_grade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signing_grade, int exec_grade) : name(name), signing_grade(signing_grade), exec_grade(exec_grade)
{
	if (signing_grade < 0)
		throw Form::GradeTooHighException();
	else if (signing_grade > 150)
		throw Form::GradeTooLowException();
	if (exec_grade < 0)
		throw Form::GradeTooHighException();
	else if (exec_grade > 150)
		throw Form::GradeTooLowException();
	this->is_signed = 0;
	std::cout << GREEN << "Form default constructor called" << STOP << std::endl;
}

void		Form::sign_it()
{
	this->is_signed = 1;
}


Form::Form(const Form &obj) : name(obj.name), signing_grade(obj.signing_grade), exec_grade(obj.exec_grade)
{
	*this = obj;
	std::cout << GREEN << "Form copy constructor called" << STOP << std::endl;
}

Form	&Form::operator=(const Form &obj)
{
	if (this == &obj)
		return (*this);
	this->is_signed = obj.is_signed;
	return (*this);
}

void	Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this->getSigningGrade())
		throw Form::GradeTooLowException();
	this->sign_it();
}


std::string const	Form::getName() const
{
	return (this->name);
}

int					Form::getSigningGrade() const
{
	return (this->signing_grade);
}

int					Form::getExecGrade() const
{
	return (this->exec_grade);
}

int					Form::isSigned() const
{
	return (this->is_signed);
}


Form::~Form()
{
	std::cout << RED << "Form destructor called" << STOP << std::endl;
}

std::ostream& operator<<(std::ostream &os, Form &lucas)
{
	os << "Name of the form : " << lucas.getName() <<  std::endl << "Sign grade : " << lucas.getSigningGrade() << std::endl << "Exec grade : " << lucas.getExecGrade() << std::endl << "Is signed : " << lucas.isSigned() << std::endl;
	return (os);
}