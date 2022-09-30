#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
	private:
		Brain *brainptr;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		void	addIdea(std::string idea);
		void	affIdea(int i);
		void	makeSound() const;
		virtual ~Cat();
};

#endif