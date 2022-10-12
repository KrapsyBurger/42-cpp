#include "Cast.hpp"

Cast::Cast()
{
	this->type_char = 0;
	this->type_int = 0;
	this->type_float = 0;
	this->type_double = 0;
	this->is_negative = 0;
	this->is_char_impossible = 0;
}


Cast::Cast(const Cast &obj)
{
	*this = obj;
}

Cast &Cast::operator=(const Cast &obj)
{
	this->type_char = obj.type_char;
	this->type_int = obj.type_int;
	this->type_float = obj.type_float;
	this->type_double = obj.type_double;
	return (*this);
}

int	Cast::is_there_coma(const char *arg)
{
	int i = 0;
	while (arg[i])
	{
		if (arg[i] == '.')
			return (1);
		i++;
	}
	return (0);
}

int	Cast::is_it_int(const char *arg)
{
	int i = 0;
	if (arg[i] == '-')
		i++;
	while (arg[i])
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int Cast::nan_inf_check(const char *arg)
{
	std::string arg2 = arg;
	if (arg2 == "nan" || arg2 == "nanf" || arg2 == "-inf" || arg2 == "-inff" || arg2 == "+inf" || arg2 == "+inff")
	{
		this->initial_type = "special";
		return (1);
	}
	return (0);
}

void Cast::get_arg_type(const char *arg)
{
	char *end = NULL;
	float a = strtof(arg, &end);
	std::string end2 = end;
	if (nan_inf_check(arg) == 1)
		return ;
	if (end[0] >= 33 && end[0] <= 124 && strlen(arg) == 1)
	{
		this->initial_type = "char";
		this->type_char = end[0];
	}
	else if (end2 == "\0" && is_there_coma(arg) == 1)
	{
		this->initial_type = "double";
		this->type_double = strtod(arg, &end);
	}
	else if (end2 == "f" && is_there_coma(arg) == 1)
	{
		this->initial_type = "float";
		this->type_float = strtof(arg, &end);
	}
	else if (is_it_int(arg) == 1)
	{
		this->initial_type = "int";
		long test = strtol(arg, &end, 10);
		if (test > 2147483647 || test < -2147483648)
			this->initial_type = "Impossible";
		this->type_int = atoi(arg);
	}
	else
		this->initial_type = "Impossible";
	if (arg[0] == '-')
		this->is_negative = 1;
	(void)a;
}

void Cast::cast_char()
{
	this->type_float = static_cast<float>(this->type_char);
	this->type_double = static_cast<double>(this->type_char);
	this->type_int = static_cast<int>(this->type_char);
}

void Cast::cast_double()
{
	this->type_char = static_cast<char>(this->type_double);
	this->type_float = static_cast<float>(this->type_double);
	this->type_int = static_cast<int>(this->type_double);
}

void Cast::cast_int()
{
	if (this->type_int < 33 || this->type_int > 124)
		this->is_char_impossible = 1;
	this->type_char = static_cast<char>(this->type_int);
	this->type_float = static_cast<float>(this->type_int);
	this->type_double = static_cast<double>(this->type_int);
}

void Cast::cast_float()
{
	this->type_char = static_cast<char>(this->type_float);
	this->type_double = static_cast<double>(this->type_float);
	this->type_int = static_cast<int>(this->type_float);
}

void Cast::convert_all()
{
	if (this->initial_type == "Impossible")
		return ;
	if (this->initial_type == "char")
		cast_char();
	else if (this->initial_type == "double")
		cast_double();
	else if (this->initial_type == "float")
		cast_float();
	else if (this->initial_type == "int")
		cast_int();
}

void Cast::special_display(const char *arg)
{
	std::string arg2 = arg;
	std::cout << "char: Impossible" << std::endl;
	if (arg2 == "nan")
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << "f" << std::endl;
		std::cout << "double: " << arg2 << std::endl;
	}
	else if (arg2 == "nanf")
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << std::endl;
		arg2.erase(3);
		std::cout << "double: " << arg2 << std::endl;
	}
	else if (arg2 == "-inf")
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << "f" << std::endl;
		std::cout << "double: " << arg2 << std::endl;
	}
	else if (arg2 == "-inff")
	{
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << std::endl;
		arg2.erase(4);
		std::cout << "double: " << arg2 << std::endl;
	}
	else if (arg2 == "+inf")
	{
		arg2.erase(0, 1);
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << "f" << std::endl;
		std::cout << "double: " << arg2 << std::endl;
	}
	else if (arg2 == "+inff")
	{
		arg2.erase(0, 1);
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << arg2 << std::endl;
		arg2.erase(3);
		std::cout << "double: " << arg2 << std::endl;
	}
}

void Cast::display_all(const char *arg)
{
	if (this->initial_type == "Impossible")
	{
		std::cout << "Might be impossible to convert in any cases" << std::endl;
		return ;
	}
	else if (this->initial_type == "special")
	{
		special_display(arg);
		return ;
	}
	std::cout << "char: ";
	if (this->is_char_impossible == 0)
		std::cout << this->type_char << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << this->type_int << std::endl;
	std::cout << "float: ";
	std::cout << this->type_float << "f" << std::endl;
	std::cout << "double: ";
	std::cout << this->type_double << std::endl;
}

void Cast::ultimate_convert(const char *arg)
{
	get_arg_type(arg);
	convert_all();
	display_all(arg);
}

Cast::~Cast() {}