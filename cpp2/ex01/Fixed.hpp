#include <iostream>

#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed
{
	private:
		float				number;
		static const int	bits;
	public:
		Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);
		~Fixed();

};

#endif