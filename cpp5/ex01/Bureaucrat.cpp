#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
	*this = obj;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

void		Bureaucrat::signForm(Form &obj)
{
	if (this->grade < obj.getSigningGrade())
	{
		std::cout << this->name << " signed " << obj.getName() << std::endl;
		obj.sign_it();
	}
	else
		std::cout << this->name << " couldn't sign " << obj.getName() << " because " << " grade is too low" << std::endl;
}

int			Bureaucrat::getGrade()
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
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat &lucas)
{
	os << lucas.getName() << ", bureaucrat grade " << lucas.getGrade();
	return (os);
}