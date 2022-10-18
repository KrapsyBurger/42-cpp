#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	std::cout << GREEN << "RobotomyRequestForm default constructor called" << STOP << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	this->target = obj.target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->isSigned() == 0)
	{
		throw IsntSigned();
		return ;
	}
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << "*LOUD DRILL NOISES*" << std::endl;
	std::cout << "waiting..." << std::endl << "..." << std::endl;
	std::cout << this->target << " has been successfully robotomised with success 50% of the time" << std::endl;
	std::cout << executor.getName() << " well executed " << this->getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj)
{
	*this = obj;
	std::cout << GREEN << "RobotomyRequestForm copy constructor called" << STOP << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "RobotomyRequestForm destructor called" << STOP << std::endl;
}