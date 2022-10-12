#include "Cast.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	Cast a;
	a.ultimate_convert(argv[1]);
	return (0);
}