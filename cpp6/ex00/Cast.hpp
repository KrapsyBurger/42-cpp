#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef CAST_HPP
#define CAST_HPP

class Cast
{
	private:
		std::string	initial_type;
		char		type_char;
		int			type_int;
		float		type_float;
		double		type_double;
		bool		is_negative;
		bool		is_char_impossible;
	public:
		int		is_there_coma(const char *arg);
		int		is_it_int(const char *arg);
		void	get_arg_type(const char *arg);
		int		nan_inf_check(const char *arg);
		void	convert_all();
		void	cast_char();
		void	cast_int();
		void	cast_float();
		void	cast_double();
		void	display_all(const char *arg);
		void	ultimate_convert(const char *arg);
		void	special_display(const char *arg);
		Cast();
		Cast(const Cast &obj);
		Cast &operator=(const Cast &obj);
		~Cast();
};

#endif