#include <iostream>

int main(int argc, char **argv)
{
	int	idx = 0;
	int	argv_idx = 0;

	while (argv_idx < argc)
	{
		while(argv[argv_idx][idx])
		{
			argv[argv_idx][idx] = toupper(argv[argv_idx][idx]);
			idx++;
		}
		idx = 0;
		argv_idx++;
	}
	idx = 1;
	if (argc > 1)
	{
		while (idx < argc)
		{
			std::cout << argv[idx];
			idx++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}