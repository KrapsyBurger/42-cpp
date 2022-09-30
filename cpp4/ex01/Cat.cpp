#include "Cat.hpp"

Cat::Cat() : Animal() 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brainptr = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj) 
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brainptr;
	std::cout << "Cat destructor called" << std::endl;
}