#include "Animal.hpp"

Animal::Animal() 
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Unknown type, is that an alien ?" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal() 
{
	std::cout << "Animal destructor called" << std::endl;
}