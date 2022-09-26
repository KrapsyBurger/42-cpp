#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	std::string level;
	Harl harl;

	level = argv[1];
	harl.complex_complain(level);
	return (0);
}