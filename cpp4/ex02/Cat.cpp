#include "Cat.hpp"

Cat::Cat() : Animal() 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brainptr = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj) 
{
	this->brainptr = new Brain();
	*this = obj;
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*meow cutely*" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	*this->brainptr = *obj.brainptr;
	return (*this);
}

void	Cat::addIdea(std::string idea)
{
	this->brainptr->addIdeas(idea);
}

void	Cat::affIdea(int i)
{
	this->brainptr->affIdea(i);
}

Cat::~Cat()
{
	delete this->brainptr;
	std::cout << "Cat destructor called" << std::endl;
}
