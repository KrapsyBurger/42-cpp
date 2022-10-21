#include "Dog.hpp"

Dog::Dog() : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &obj) : Animal(obj) 
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Bark loudely*" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}