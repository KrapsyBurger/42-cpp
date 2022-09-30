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
		void	addIdea(std::string idea);
		void	affIdea(int i);
		void	makeSound() const;
		Dog &operator=(const Dog &obj);
		virtual ~Dog();
};

#endif