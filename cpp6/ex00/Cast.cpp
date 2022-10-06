#include "Cast.hpp"

Cast::Cast()
{
	this->type_char = 0;
	this->type_int = 0;
	this->type_float = 0;
	this->type_double = 0;
}

int	Cast::getchar()
{
	return (this->type_int);
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

Cast::~Cast() {}