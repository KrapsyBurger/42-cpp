#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->tab.reserve(N);
	this->og_size = N;
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	this->tab = obj.tab;
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (this->tab.size() == this->og_size)
	{
		throw FillException();
	}
	this->tab.push_back(nbr);
}

int		Span::shortestSpan()
{
	if (this->tab.size() <= 1)
		throw SpanException();
	int							difference;
	std::vector<int>			newtab;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;
	newtab = this->tab;
	std::sort(this->tab.begin(), this->tab.end());
	it1 = this->tab.begin();
	it2 = it1 + 1;
	difference = *it2 - *it1;
	while (it2 < this->tab.end())
	{
		if (*it2 - *it1 < difference)
			difference = *it2 - *it1;
		it1++;
		it2++;
	}
	this->tab = newtab;
	return (difference);
}

int		Span::longestSpan()
{
	if (this->tab.size() <= 1)
		throw SpanException();
	std::vector<int>::iterator min_it;
	std::vector<int>::iterator max_it;

	min_it = std::min_element(this->tab.begin(), this->tab.end());
	max_it = std::max_element(this->tab.begin(), this->tab.end());
	return (*max_it - *min_it);
}

void	Span::addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	while (first < last)
	{
		this->tab.push_back(*first);
		first++;
	}
}





void Span::affData(void) {
	std::cout << "Array : " << std::endl;
    for (unsigned long int i = 0; i < this->tab.size(); i++) {
        std::cout << this->tab[i] << "\t";
    }
    std::cout << std::endl;
}


Span::~Span() {}