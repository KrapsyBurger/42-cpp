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

		typedef typename std::stack<T>::container_type::iterator iterator;
   		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin()
		{
			return(std::begin(this->c));
		}
		iterator end()
		{
			return(std::end(this->c));
		}
		const_iterator begin() const
		{
			return(std::begin(this->c));
		}
		const_iterator end() const
		{
			return(std::end(this->c));
		}
		reverse_iterator	rbegin(void) 
		{
			return (rbegin(this->c));
		};
		reverse_iterator	rend(void) 
		{ 
			return (rend(this->c));
		};
    	const_reverse_iterator	rbegin(void) const 
		{
			return (rbegin(this->c));
		};
		const_reverse_iterator	rend(void) const
		{
			return (rend(this->c));
		};
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