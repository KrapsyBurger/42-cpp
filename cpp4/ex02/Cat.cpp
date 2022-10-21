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

Cat &Cat::operator=(const Cat &obj)
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

void	Cat::makeSound() const
{
	std::cout << "*meow cutely*" << std::endl;
}

void	Cat::addIdea(std::string idea)
{
	this->brainptr->addIdeas(idea);
}

void	Cat::affIdea()
{
	this->brainptr->affIdea();
}

Cat::~Cat()
{
	delete this->brainptr;
	std::cout << "Cat destructor called" << std::endl;
}
