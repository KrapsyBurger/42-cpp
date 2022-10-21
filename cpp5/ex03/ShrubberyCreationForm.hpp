#include "color.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		void	execute(Bureaucrat const &executor) const;
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		virtual ~ShrubberyCreationForm();
};

#endif