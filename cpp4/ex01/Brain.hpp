#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		void	addIdeas(std::string idea);
		void	affIdea(int i);
		Brain &operator=(const Brain &obj);
		virtual ~Brain();
};

#endif