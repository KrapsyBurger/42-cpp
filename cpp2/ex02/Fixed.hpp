#include <iostream>
#include <cmath>

#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed
{
	private:
		int					number;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &obj);
		~Fixed();
		int					getRawBits() const;
		void				setRawBits(int const raw);
		float				toFloat() const;
		int					toInt() const;
		static Fixed		min(Fixed &first, Fixed &second);
		static Fixed		min(const Fixed &first, const Fixed &second);
		static Fixed		max(Fixed &first, Fixed &second);
		static Fixed		max(const Fixed &first, const Fixed &second);
		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;
		Fixed	&operator=(const Fixed &obj);
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		bool	operator>(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		
};

std::ostream&	operator<<(std::ostream &os, const Fixed &obj);

#endif