#include <iostream>
#include "color.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	private:
	public:
		Form	*(Intern::*func_tab[3])(std::string target);
		std::string forms[3];
		Form *makeForm(std::string FormName, std::string target);
		Form *makePresidentialPardon(std::string target);
		Form *makeRobotomyRequest(std::string target);
		Form *makeShrubberyCreation(std::string target);
		Intern();
		~Intern();
};

#endif