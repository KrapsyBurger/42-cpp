#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a(150);
		std::cout << a << std::endl;
		a.gradeDecr();
		std::cout << a.getName() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}