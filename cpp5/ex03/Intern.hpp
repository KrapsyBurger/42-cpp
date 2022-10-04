#include <iostream>
#include <unordered_map>
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
		std::unordered_map<std::string, Form *(Intern::*)(std::string)> func;
		Form *makeForm(std::string FormName, std::string target);
		Form *makePresidentialPardon(std::string target);
		Form *makeRobotomyRequest(std::string target);
		Form *makeShrubberyCreation(std::string target);
		Intern();
		~Intern();
};

#endif