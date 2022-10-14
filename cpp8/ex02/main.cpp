#include "MutantStack.hpp"
#include <stack>


int main()
{
	MutantStack<int> mutant;

	mutant.push(42);
	mutant.push(3);
	MutantStack<int>::iterator it = mutant.begin();
	std::cout << *it << std::endl;
	return (0);
}