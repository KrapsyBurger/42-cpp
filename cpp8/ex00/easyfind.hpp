#include <iostream>
#include <vector>
#include <algorithm>


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>

void easyfind(std::vector<T> container, int to_find)
{
	typename std::vector<T>::iterator it;
	it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
		std::cout << "Didn't find anything !" << std::endl;
	else
		std::cout << *it << std::endl;
}

#endif