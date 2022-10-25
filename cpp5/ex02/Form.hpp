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
		std::string	const	getName() const;
		int					getSigningGrade() const;
		int					getExecGrade() const;
		int					isSigned() const;
		void				sign_it();
		virtual void		execute(Bureaucrat const &executor) const = 0;
		void				beSigned(Bureaucrat &signer);
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
		class IsntSigned : public std::exception
		{
			public:
				virtual const char *what() const throw() 
				{
					return ("Form : this form isn't signed !");
				}
		};
};

std::ostream& operator<<(std::ostream &os, Form &lucas);

#endif