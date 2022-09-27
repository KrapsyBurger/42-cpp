#include "Fixed.hpp"


Fixed::Fixed()
{
	this->number = 0;
}

Fixed::Fixed(const int nb)
{
	this->number = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	this->number = roundf(nb * (1 << this->bits));
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
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

Fixed::~Fixed() {}

Fixed	Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed	Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed	Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed	Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed	Fixed::operator+(const Fixed &obj) const
{
	Fixed ret;

	ret.setRawBits(this->number + obj.number);
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	Fixed ret;

	ret.setRawBits(this->number - obj.number);
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	Fixed ret;

	ret.setRawBits(this->toFloat() * obj.number);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	Fixed ret;

	ret.setRawBits(roundf((1 << this->bits) * this->number / obj.number));
	return (ret);
}

Fixed 	&Fixed::operator=(const Fixed &obj)
{
	this->number = obj.getRawBits();
	return (*this);
}

Fixed	Fixed::operator++()
{
	this->number += 1;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->number -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	this->number += 1;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	this->number -= 1;
	return (temp);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->number > obj.number);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->number >= obj.number);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->number < obj.number);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->number <= obj.number);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->number == obj.number);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->number != obj.number);
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}