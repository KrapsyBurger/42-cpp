#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			signing_grade;
		const int			exec_grade;
	public:
		std::string	const	getName();
		int					getSigningGrade();
		int					getExecGrade();
		int					isSigned();
		void				beSigned(Bureaucrat Lucas);
		void				sign_it();
		Form();
		Form(std::string name, int signing_grade, int exec_grade);
		Form &operator=(const Form &obj);
		Form(const Form &obj);
		~Form();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form : Grade is too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() 
				{
					return ("Form : Grade is too low !");
				}
		};

};

std::ostream& operator<<(std::ostream &os, Form &lucas);

#endif