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


void	Harl::complex_complain(std::string level)
{
	int i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*func_tab[i])();
			(this->*func_tab[i + 1])();
			(this->*func_tab[i + 2])();
			(this->*func_tab[i + 3])();
			break;
		case 1:
			(this->*func_tab[i])();
			(this->*func_tab[i + 1])();
			(this->*func_tab[i + 2])();
			break;
		case 2:
			(this->*func_tab[i])();
			(this->*func_tab[i + 1])();
			break;
		case 3:
			(this->*func_tab[i])();
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}


Harl::~Harl() {}