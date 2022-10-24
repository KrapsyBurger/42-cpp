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
			std::cout << "constructor called" << std::endl;
			unsigned long i = 0;
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
			std::cout << "copy constructor called" << std::endl;
 			this->array = new T[obj.size()];
			this->array_size = obj.size();
			*this = obj;
		};

		Array &operator=(const Array &obj)
		{
			unsigned int i = 0;
			while (i < obj.size())
			{
				this->array[i] = obj.array[i];
				i++;
			}
			return (*this);
		};

		~Array()
		{
			//delete[] this->array;
			std::cout << "destructor called" << std::endl;
		};

		unsigned int size() const
		{
			unsigned int i = this->array_size;
			return (i);   
		};

		T &operator[](unsigned long i)
		{
			if (i > this->size() || i < 0)
			{
			 	throw exception();
			}
			return (this->array[i]);
		};

		class exception : public std::exception
		{
			const char *what() const throw()
			{
				return ("Error, invalid index");
			}
		};
};

#endif