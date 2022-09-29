#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	private:
	public:
		Dog();
		Dog(const Dog &obj);
		~Dog();
};

#endif