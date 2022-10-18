#include "Intern.hpp"

Intern::Intern()
{
	this->forms[0] = "robotomy request";
	this->forms[1] = "presidential pardon";
	this->forms[2] = "shrubbery creation";
	this->func_tab[0] = &Intern::makeRobotomyRequest;
	this->func_tab[1] = &Intern::makePresidentialPardon;
	this->func_tab[2] = &Intern::makeShrubberyCreation;
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
	int i = 0;
	while (this->forms[i] != FormName && i < 3)
		i++;
	if (i > 2)
	{
		std::cout << "This form doesnt exist" << std::endl;
		return (NULL);
	}
	else
		return ((this->*func_tab[i])(target));
}

Intern::~Intern()
{
	std::cout << RED << "Intern destructor called" << STOP << std::endl;
}