#include <iostream>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
		std::string	getName();
		int			getGrade();
		void		gradeIncr();
		void		gradeDecr();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() 
				{
					return ("Grade is too low !");
				}
		};
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &lucas);

#endif