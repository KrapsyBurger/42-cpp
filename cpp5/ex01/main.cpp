#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat Lucas(12);
	Form a("Oui", 11, 150);
	try
	{
		a.beSigned(Lucas);
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Lucas.signForm(a);
	return (0);
}