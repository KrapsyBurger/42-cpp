#include "iter.hpp"


template<typename T>
void print_elem(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void add32(T &a) 
{
	a += 32;
}

int main() 
{
	char str[27] = "THIS IS AN EXEMPLE OF CHAR";
	char *ptr = str;
	iter<char>(ptr, 26, &add32);
	iter<char>(ptr, 26, &print_elem);
	std::cout << std::endl;
	int tab[5] = {10,20,30,40,50};
	int *ptrtab = tab;
	iter<int>(ptrtab, 5, &add32);
	iter<int>(ptrtab, 5, &print_elem);
}