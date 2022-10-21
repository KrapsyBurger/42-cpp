#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Lucas(46, "Lucas");
	Bureaucrat Nathan(25, "Nathan");
	Intern someRandom;
	Form *formulaire = someRandom.makeForm("robotomy request", "Bender");
	Form *oui = someRandom.makeForm("shrubbery creation", "SosoManess");
	try
	{
		std::cout << CYAN;
		Lucas.signForm(*formulaire);
		std::cout << *formulaire << std::endl;
		Nathan.executeForm(*formulaire);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << STOP;
	try
	{
		std::cout << MAGENTA;
		Lucas.signForm(*oui);
		std::cout << *oui << std::endl;
		Nathan.executeForm(*oui);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << STOP;
	Form *test = someRandom.makeForm("DOESNT WORK", "sfsfsfsdf");
	delete formulaire;
	delete oui;
	delete test;
	return (0);
}
