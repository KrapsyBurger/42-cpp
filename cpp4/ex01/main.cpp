#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *tab[100];
	int i = 0;

	while (i < 50)
	{
		tab[i] = new Dog();
		i++;
	}
	while (i < 100)
	{
		tab[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 100)
	{
		delete tab[i];
		i++;
	}
	return (0);
}