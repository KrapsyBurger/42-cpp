#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string type;
	public:
		virtual void	makeSound() const;
		Animal();
		Animal(const Animal &obj);
		std::string getType() const;
		Animal &operator=(const Animal &obj);
		virtual ~Animal();
};

#endif