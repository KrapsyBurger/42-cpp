#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat zap1("Zap1", 1);
	Bureaucrat bob20("Bob20", 20);
	Bureaucrat dan70("Dan70", 70);
	Bureaucrat ted100("Ted100", 100);
	Bureaucrat tod150("Tod150", 150);
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm scf("Planet2000Express");
		std::cout << ORANGE << scf << std::endl << STOP;
		std::cout << YELLOW;
		//tod150.executeForm(scf); //GRADE TOO LOW
		//ted100.executeForm(scf); //ISNT SIGNED
		tod150.signForm(scf); // CANT SIGN IT
		ted100.signForm(scf);
		tod150.executeForm(scf); // CANT EXECUTE
		ted100.executeForm(scf);
		std::cout << STOP;
	}
	catch (std::exception &a) 
	{
		std::cout << a.what() << std::endl;
	}
		std::cout << std::endl;
	try
	{
		RobotomyRequestForm rrf("Fry");
		std::cout << ORANGE << rrf << std::endl << STOP;
		std::cout << LBLUE;
		//ted100.executeForm(rrf); // CANT EXEC
		//dan70.executeForm(rrf); // CANT EXEC
		//bob20.executeForm(rrf); // NOT SIGNED
		//ted100.signForm(rrf); // CANT SIGN
		dan70.signForm(rrf);
		//dan70.executeForm(rrf); // CANT EXEC
		bob20.executeForm(rrf);
		//ted100.executeForm(rrf); // CANT EXEC
		std::cout << STOP;
	}
	catch (std::exception &a) 
	{
		std::cout << a.what() << std::endl;
	}
		std::cout << std::endl;
	try
	{
		PresidentialPardonForm ppf("Bender");
		std::cout << ORANGE << ppf << std::endl << STOP;
		std::cout << MAGENTA;
		//bob20.executeForm(ppf); // GRADE TOO LOW + ISNT SIGNED
		//zap1.executeForm(ppf); // ISNT SIGNED
		dan70.signForm(ppf); // GRADE TOO LOW
		bob20.signForm(ppf);
		bob20.executeForm(ppf); // GRADE TOO LOW
		zap1.executeForm(ppf);
		std::cout << STOP;
	}
	catch (std::exception &a) 
	{
		std::cout << a.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}