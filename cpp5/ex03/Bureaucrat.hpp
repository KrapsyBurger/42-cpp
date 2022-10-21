#include <iostream>
#include "color.hpp"

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
		void		signForm(Form &obj);
		std::string	getName() const;
		int			getGrade() const;
		void		gradeIncr();
		void		gradeDecr();
		void		executeForm(Form const &form);
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat : Grade is too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() 
				{
					return ("Bureaucrat : Grade is too low !");
				}
		};
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &lucas);

#endif