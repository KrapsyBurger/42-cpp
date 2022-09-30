#include <iostream>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal
{
	protected:
		std::string type;
	public:
		void	makeSound() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		std::string getType() const;
		WrongAnimal &operator=(const WrongAnimal &obj);
		~WrongAnimal();
};

#endif