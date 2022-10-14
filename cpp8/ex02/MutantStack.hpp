#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template<typename T>

class MutantStack : public std::stack<T>
{
	public:
		T begin()
		{
			return(std::begin(this->c));
		}
		T end()
		{
			return(std::end(this->c));
		}
		T begin() const
		{
			return(std::begin(this->c));
		}
		T end() const
		{
			return(std::end(this->c));
		}
		MutantStack(){};
		MutantStack(const MutantStack &obj)
		{
			*this = obj;
		};
		MutantStack &operator=(const MutantStack &obj)
		{
			this->stack = obj.stack;
			return (*this);
		};
		~MutantStack(){};

};

#endif