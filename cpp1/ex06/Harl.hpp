#include <iostream>
#include <unordered_map>

#ifndef __HARL_H__
#define __HARL_H__


class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		int		level_convert(std::string level);
	public:
		std::unordered_map<std::string, void (Harl::*)()> function_map;
		void	complex_complain(std::string level);
		Harl();
		~Harl();
};

#endif 