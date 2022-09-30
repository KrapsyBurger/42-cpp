#include "Dog.hpp"

Dog::Dog() : Animal() 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brainptr = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj) 
{
	this->brainptr = new Brain();
	*this = obj;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	*this->brainptr = *obj.brainptr;
	return (*this);
}

void	Dog::addIdea(std::string idea)
{
	this->brainptr->addIdeas(idea);
}

void	Dog::affIdea(int i)
{
	this->brainptr->affIdea(i);
}

void	Dog::makeSound() const
{
	std::cout << "*BARK LOUDELY*" << std::endl;
}

Dog::~Dog()
{
	delete this->brainptr;
	std::cout << "Dog destructor called" << std::endl;
}