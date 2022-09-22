#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "address of the string variable : " << &brain << std::endl;
	std::cout << "address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "address held by stringREF : " << &stringREF << std::endl;

	std::cout << "value of the string variable : " << brain << std::endl;
	std::cout << "pointed value by stringPTR : " << *stringPTR << std::endl;
	std::cout << "pointed value by stringREF : " << stringREF << std::endl;
	return (0);
}