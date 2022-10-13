#include "iter.hpp"

template<typename T>
void print_elem(T a)
{
	std::cout << a << std::endl;
}


int main()
{
	int a[5] = {0, 1, 2, 3, 4};

	iter(a, 5, &print_elem);

	return (0);
}