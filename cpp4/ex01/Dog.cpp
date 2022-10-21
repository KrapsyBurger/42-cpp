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
	int i = 0;
	this->type = obj.type;
	while (obj.brainptr->getIdea(i).empty() != true)
	{
		this->brainptr->addIdeaidx(obj.brainptr->getIdea(i), i);
		i++;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "*Bark loudely*" << std::endl;
}

void	Dog::addIdea(std::string idea)
{
	this->brainptr->addIdeas(idea);
}

void	Dog::affIdea()
{
	this->brainptr->affIdea();
}

Dog::~Dog()
{
	delete this->brainptr;
	std::cout << "Dog destructor called" << std::endl;
}