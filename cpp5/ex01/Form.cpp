#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("unknown"), signing_grade(0), exec_grade(0)
{
	std::cout << "default constructor called" << std::endl;
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
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name), signing_grade(obj.signing_grade), exec_grade(obj.exec_grade)
{
	*this = obj;
}

Form	&Form::operator=(const Form &obj)
{
	this->is_signed = obj.is_signed;
	return (*this);
}

void		Form::beSigned(Bureaucrat Lucas)
{
	if (Lucas.getGrade() > this->signing_grade)
		throw Form::GradeTooLowException();
	this->is_signed = 1;
}

void		Form::sign_it()
{
	this->is_signed = 1;
}

std::string const	Form::getName()
{
	return (this->name);
}

int					Form::getSigningGrade()
{
	return (this->signing_grade);
}

int					Form::getExecGrade()
{
	return (this->exec_grade);
}

int					Form::isSigned()
{
	return (this->is_signed);
}


Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, Form &lucas)
{
	os << "Name of the form : " << lucas.getName() <<  std::endl << "Sign grade : " << lucas.getSigningGrade() << std::endl << "Exec grade : " << lucas.getExecGrade() << std::endl << "Is signed : " << lucas.isSigned() << std::endl;
	return (os);
}