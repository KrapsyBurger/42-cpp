#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *tab[5];
	int i = 0;

	while (i < 2)
	{
		tab[i] = new Dog();
		i++;
	}
	while (i < 3)
	{
		tab[i] = new Cat();
		i++;
	}
	return (0);
}