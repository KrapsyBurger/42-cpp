#include <iostream>
#include <vector>
#include <algorithm>

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
	private:
		unsigned int				og_size;
		std::vector<int>			tab;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();
		void	addNumber(int nbr);
		int		longestSpan();
		int		shortestSpan();
		void	addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
		void	affData();
	class FillException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return("Span already filled !");
			}
	};
	class SpanException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return("No span can be found !");
			}
	};
	class ManyNumbersException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return("Can't add that many numbers !");
			}
	};
};

#endif