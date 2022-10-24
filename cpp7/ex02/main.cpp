#include "Array.hpp"
#include <cstdlib>
#include <ctime>


#define MAX_VAL 750


int main(int, char **)
{
	// Array<int> numbers(5);

	// numbers[0] = 0;
	// numbers[1] = 1;
	// numbers[2] = 2;
	// numbers[3] = 3;
	// numbers[4] = 4;

	// numbers[0] = 2500;

	// Array<int> copy(numbers);
	// Array<int> tmp = numbers;
	// std::cout << copy[0] << std::endl;
	// numbers[0] = 12;
	// std::cout << copy[0] << std::endl;


	Array<int> numbers((unsigned int )MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// Array<int> tmp = numbers;
	// Array<int> test(tmp);
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	// try
	// {
	//  	numbers[-2] = 0;
	// }
	//  catch(const std::exception& e)
	// {
	//  	std::cerr << e.what() << '\n';
	// }
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	std::cout << numbers[59] << std::endl;
	std::cout << numbers[MAX_VAL] << std::endl;
	delete[] mirror;
	return 0;
}
