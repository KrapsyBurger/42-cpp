#include <iostream>

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>

class Array
{
	private:
	T *array;
	unsigned int array_size;
	public:
	Array()
	{
		this->array_size = 0;
	};

	Array(unsigned int n)
	{
		unsigned int i = 0;
		this->array = new T[n];
		while (i < n)
		{
			this->array[i] = 0;
			i++;
		}
		this->array_size = n;
	};

	Array(const Array &obj)
	{
		this->array = new T[obj.size()];
		*this = obj;
	};

	Array &operator=(const Array &obj)
	{
		int i = 0;
		if (this->size() > obj.size())
		{
			std::cout << "Array is too big" << std::endl;
			return NULL;
		}
		else if (this->size() < obj.size())
		{
			std::cout << "Array is too small" << std::endl;
			return NULL;
		}
		while (i < obj.size())
		{
			this->array[i] = obj.array[i];
			i++;
		}
		return (*this);
	};

	~Array()
	{
		delete [] this->array;
	};

	unsigned int size()
	{
		unsigned int i = this->array_size;
		return (i);
	};

	T &operator[](unsigned int i)
	{
		if (i > this->size())
			throw exception();
		return (this->array[i]);
	};

	class exception : public std::exception
	{
		const char *what() const throw()
		{
			return ("Valid index is required");
		}
	};
};

#endif