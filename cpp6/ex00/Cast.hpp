#include <iostream>

#ifndef CAST_HPP
#define CAST_HPP

class Cast
{
	private:
		char	type_char;
		int		type_int;
		float	type_float;
		double	type_double;
	public:

		int getchar();

		Cast();
		Cast(const Cast &obj);
		Cast &operator=(const Cast &obj);
		~Cast();
};

#endif