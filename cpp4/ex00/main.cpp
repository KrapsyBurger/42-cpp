#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const WrongAnimal *i = new WrongCat();
	const Animal *cat = new Cat();
	std::cout << std::endl;

	std::cout << dog->getType() << " : ";
	dog->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() << " : ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << cat->getType() << " : ";
	cat->makeSound();
	std::cout << std::endl;

	meta->makeSound();

	delete meta;
	delete dog;
	delete i;
	delete cat;
	return (0);
}