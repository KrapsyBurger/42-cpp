#include "Dog.hpp"

Dog::Dog() : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brainptr = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj) 
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	this->brainptr = obj.brainptr;
	return (*this);
}

Dog::~Dog()
{
	delete this->brainptr;
	std::cout << "Dog destructor called" << std::endl;
}