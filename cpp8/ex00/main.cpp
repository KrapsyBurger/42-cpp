#include "easyfind.hpp"

int main()
{
	std::vector<int> tab;
	tab.push_back(0);
	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);
	tab.push_back(0);
	easyfind(tab, 3);
	return (0);
}
