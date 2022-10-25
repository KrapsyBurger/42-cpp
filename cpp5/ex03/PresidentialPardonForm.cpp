#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonFrom default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
	std::cout << GREEN << "PresidentialPardonForm default constructor called" << STOP << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this == &obj)
		return (*this);
	this->target = obj.target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->isSigned() == 0)
	{
		std::cout << "This form isnt signed." << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	std::cout << executor.getName() << " well executed " << this->getName() << std::endl;
	

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
	*this = obj;
	std::cout << GREEN << "PresidentialPardonForm copy constructor called" << STOP << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "PresidentialPardonForm destructor called" << STOP << std::endl;
}