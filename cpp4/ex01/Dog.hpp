#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	private:
		Brain *brainptr;
	public:
		Dog();
		Dog(const Dog &obj);
		~Dog();
};

#endif