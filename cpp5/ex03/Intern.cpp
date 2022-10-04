#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << "Intern default constructor called" << STOP << std::endl;
}

Form *Intern::makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string FormName, std::string target)
{
	this->func["robotomy request"] = &Intern::makeRobotomyRequest;
	this->func["presidential pardon"] = &Intern::makePresidentialPardon;
	this->func["shrubbery creation"] = &Intern::makeShrubberyCreation;
	if (!this->func[FormName])
	{
		std::cout << "Can't find this form" << std::endl;
		return (NULL);
	}
	return ((this->*func["robotomy request"])(target));
}

Intern::~Intern()
{
	std::cout << RED << "Intern destructor called" << STOP << std::endl;
}