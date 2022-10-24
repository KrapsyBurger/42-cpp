#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const WrongAnimal *i = new WrongCat();
	const Animal *cat = new Cat();
	const WrongCat *coucou = new WrongCat();
	std::cout << std::endl;

	std::cout << dog->getType() << " : ";
	dog->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() << " (as a wrongAnimal) : ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << cat->getType() << " : ";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << meta->getType() << " : ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "wrongCat as a wrongCat : ";
	coucou->makeSound();
	std::cout << std::endl;



	delete meta;
	delete dog;
	delete i;
	delete cat;
	delete coucou;
	return (0);
}