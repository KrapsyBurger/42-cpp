#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Lucas(25, "Lucas");
	Bureaucrat Nathan(2, "Nathan");
	PresidentialPardonForm formulaire("coucou");
	try
	{
		Lucas.signForm(formulaire);
		std::cout << formulaire << std::endl;
		Nathan.executeForm(formulaire);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}