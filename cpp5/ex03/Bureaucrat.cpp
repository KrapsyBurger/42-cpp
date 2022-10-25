#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unknown")
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << GREEN <<  "Bureaucrat constructor called" << STOP << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
	*this = obj;
	std::cout << GREEN << "Bureaucrat copy constructor called" << STOP << std::endl;
}

void		Bureaucrat::executeForm(Form const &form)
{
	if (this->grade > form.getExecGrade())
		throw Form::GradeTooLowException();
	else
		form.execute(*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void		Bureaucrat::signForm(Form &obj)
{
	if (this->grade > obj.getSigningGrade())
	{
		std::cout << this->name << " couldn't sign " << obj.getName() << " because " << " grade is too low" << std::endl;
	}
	else
	{
		std::cout << this->name << " signed " << obj.getName() << std::endl;
		obj.sign_it();
	}
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::gradeIncr()
{
	this->grade -= 1;
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::gradeDecr()
{
	this->grade += 1;
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this == &obj)
		return (*this);
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << RED << "Bureaucrat destructor called" << STOP << std::endl;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat &lucas)
{
	os << lucas.getName() << ", bureaucrat grade " << lucas.getGrade();
	return (os);
}