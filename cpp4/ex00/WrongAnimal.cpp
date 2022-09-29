#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "Wrong Cat")
		std::cout << "*meow like a wrong cat*" << std::endl;
	else
		std::cout << "Unknown type, is that an alien ?" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}