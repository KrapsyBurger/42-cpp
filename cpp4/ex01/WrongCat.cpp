#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() 
{
	std::cout << "Wrong cat default constructor called" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj) 
{
	*this = obj;
	std::cout << "Wrong cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat() 
{
	std::cout << "Wrong cat destructor called" << std::endl;
}