#include <iostream>

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *tab, int size, void (*ptr)(T &a))
{
	int i = 0;
	while (i < size)
	{
		ptr(tab[i]);
		i++;
	}
};



#endif