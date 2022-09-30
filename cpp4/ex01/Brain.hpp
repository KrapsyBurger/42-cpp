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
		Brain &operator=(const Brain &obj);
		~Brain();
};

#endif