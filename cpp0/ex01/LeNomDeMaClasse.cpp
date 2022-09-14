#include "LeNomDeMaClasse.hpp"

nomdemaclasse::nomdemaclasse(int b, std::string non)
{
	this->a = b;
	this->oui = non;
	std::cout << "constructor arg called" << std::endl;
}

nomdemaclasse::nomdemaclasse() : a(42), oui("oui")
{
		std::cout << "default constructor called" << std::endl;
}

nomdemaclasse::~nomdemaclasse()
{
	std::cout << "destructor called int nb" << this->a << std::endl;
}

int nomdemaclasse::getInt()
{
	return (this->a);
}

std::string nomdemaclasse::getString()
{
	return (this->oui);
}
