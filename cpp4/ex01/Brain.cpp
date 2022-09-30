#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	int i = 0;
	while (i < 100)
	{
		if (obj.ideas[i].empty() != 1)
			this->ideas[i] = obj.ideas[i];
		i++;
	}
	return (*this);
}

void	Brain::addIdeas(std::string idea)
{
	int i = 0;
	while (this->ideas[i].empty() != true)
		i++;
	this->ideas[i] = idea;
}

void	Brain::affIdea(int i)
{
	if (this->ideas[i].empty() == true)
	{
		std::cout << "This idea doesnt exist." << std::endl;
		return ;
	}
	else 
		std::cout << this->ideas[i] << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}