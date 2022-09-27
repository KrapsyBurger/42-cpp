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
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		
};

std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif