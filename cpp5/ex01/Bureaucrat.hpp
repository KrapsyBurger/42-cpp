#include <iostream>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string			name;
		int							grade;
	public:
		void		signForm(Form &obj);
		std::string	getName();
		int			getGrade();
		void		gradeIncr();
		void		gradeDecr();
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
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

// COLOR 

# define BLACK "\033[30m"
# define RED "\e[38;5;196m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define LGRAY "\033[37m"
# define GRAY "\033[90m"
# define LRED "\033[91m"
# define LGREEN "\e[38;5;118m"
# define LYELLOW "\033[93m"
# define LBLUE "\033[94m"
# define LMAGENTA "\033[95m"
# define LCYAN "\033[96m"
# define ORANGE "\e[38;5;208m"
# define WHITE "\033[97m"

// EFFECT

# define BOLD "\033[1m"
# define FAINT "\033[2m"
# define ITALIC "\033[3m"
# define UNDERLINED "\033[4m"

// RESET

# define STOP "\033[0m"

#endif