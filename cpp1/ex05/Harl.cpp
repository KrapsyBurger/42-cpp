#include "Harl.hpp"

Harl::Harl()
{
	this->func_tab[0] = &Harl::debug;
	this->func_tab[1] = &Harl::info;
	this->func_tab[2] = &Harl::warning;
	this->func_tab[3] = &Harl::error;
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

void	Harl::debug()
{
	std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR : This is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level)
{
	int			i = 0;
	while (i <= 4)
	{
		if (i == 4)
		{
			std::cout << "No such level !" << std::endl;
			return ;
		}
		if (levels[i] == level)
		{
			(this->*func_tab[i])();
			return ;
		}
		i++;
	}
}

Harl::~Harl() {}