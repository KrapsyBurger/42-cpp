#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(nb * (1 << this->bits));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed 	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return(this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->number / (float)(1 << this->bits));
}

int		Fixed::toInt() const
{
	return (this->number >> this->bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}