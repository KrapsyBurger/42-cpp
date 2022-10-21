#include "Cat.hpp"

Cat::Cat() : Animal() 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &obj) : Animal(obj) 
{
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*meow cutely*" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}