#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		std::string getIdea(int i);
		void	addIdeas(std::string idea);
		void	addIdeaidx(std::string idea, int i);
		void	affIdea();
		Brain &operator=(const Brain &obj);
		virtual ~Brain();
};

#endif