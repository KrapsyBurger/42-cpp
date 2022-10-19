#include "Fixed.hpp"
#include "color.hpp"

int main()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << CYAN;
	std::cout << "a initial value : " << a << std::endl;
	std::cout << "pre-incr : " << ++a << std::endl;
	std::cout << "a value : " << a << std::endl;
	std::cout << "post incr : " << a++ << std::endl;
	std::cout << "a value : " << a << std::endl;

	std::cout << "b initial value : " << b << std::endl;
	std::cout << STOP;

	std::cout << MAGENTA;
	std::cout << "max between a and b : " << Fixed::max(a, b) << std::endl;
	std::cout << STOP;

	return (0);
}
