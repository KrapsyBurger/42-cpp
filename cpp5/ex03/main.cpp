#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Lucas(25, "Lucas");
	Bureaucrat Nathan(2, "Nathan");
	Intern someRandom;
	Form *formulaire = someRandom.makeForm("robotomy request", "Bender");
	try
	{
		Lucas.signForm(*formulaire);
		std::cout << *formulaire << std::endl;
		Nathan.executeForm(*formulaire);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}