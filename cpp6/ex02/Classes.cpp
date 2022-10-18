#include "Classes.hpp"

Base::~Base() {}

Base	*generate(void)
{
	srand(time(NULL));
	Base *ptr;
	int a = rand()%(3-1+1) + 1;
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
	catch(std::exception &foo){};
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "p is a type B ptr" << std::endl;
	}
	catch(std::exception &foo){};
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "p is a type C ptr" << std::endl;
	}
	catch (std::exception &foo){}
}