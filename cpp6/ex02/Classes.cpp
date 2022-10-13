#include "Classes.hpp"
#include <random>

Base::~Base() {}

Base	*generate(void)
{
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> yes(1, 3);
	Base *ptr;
	int a = yes(gen);
	if (a == 1)
	{
		ptr = new A();
		return (reinterpret_cast<Base *>(ptr));
	}
	if (a == 2)
	{
		ptr = new B();
		return (reinterpret_cast<Base *>(ptr));
	}
	if (a == 3)
	{
		ptr = new C();
		return (reinterpret_cast<Base *>(ptr));
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "p is a type A ptr" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "p is a type B ptr" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "p is a type C ptr" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "p is a type A ptr" << std::endl;
	}
	catch (std::exception &foo){}
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "p is a type B ptr" << std::endl;
	}
	catch (std::exception &foo){}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "p is a type C ptr" << std::endl;
	}
	catch (std::exception &foo){}
}