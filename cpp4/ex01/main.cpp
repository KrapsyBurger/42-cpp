#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	Dog basic;
	{
		Dog tmp = basic;
	}

	delete i;
	delete j;

	return (0);
}
