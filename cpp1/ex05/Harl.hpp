#include <iostream>

#ifndef __HARL_H__
#define __HARL_H__


enum level_type
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		void	(Harl::*func_tab[4])();
		std::string levels[4];
		void	complain(std::string level);
		Harl();
		~Harl();
};

#endif 