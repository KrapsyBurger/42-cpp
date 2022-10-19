#include "Fixed.hpp"

int main()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a initial value : " << a << std::endl;
	std::cout << "pre-incr : " << ++a << std::endl;
	std::cout << "a value : " << a << std::endl;
	std::cout << "post incr : " << a++ << std::endl;
	std::cout << "a value : " << a << std::endl;
	std::cout << std::endl;
	std::cout << "b initial value : " << b << std::endl;
	std::cout << std::endl;
	std::cout << "max between a and b : " << Fixed::max(a, b) << std::endl;
	std::cout << "min between a and b : " << Fixed::min(a, b) << std::endl;
	std::cout << std::endl;

	int i = a > b;
	std::cout << "a > b operator : " << i << std::endl;
	i = a != b;
	std::cout << "a != b operator : " << i << std::endl;
	
	Fixed c(2);
	Fixed d(5);
	Fixed e = d / c;
	std::cout << "5 / 2 operator : " << e << std::endl;
	return (0);
}
