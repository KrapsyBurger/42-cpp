#include "Classes.hpp"
#include <iostream>


int main()
{
	Base *a;

	a = generate();
	identify(a);
	delete a;
	return (0);
}