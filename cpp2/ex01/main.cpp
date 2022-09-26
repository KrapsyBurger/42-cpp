#include "Fixed.hpp"

int main()
{
	Fixed const c( 42.42f );


	std::cout << c.getRawBits() << std::endl;
	return (0);
}
