#include "Harl.hpp"

Harl::Harl()
{
	this->function_map["DEBUG"] = &Harl::debug;
	this->function_map["INFO"] = &Harl::info;
	this->function_map["WARNING"] = &Harl::warning;
	this->function_map["ERROR"] = &Harl::error;
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

int		Harl::level_convert(std::string level)
{
	if (level == "DEBUG")
		return (1);
	else if (level == "INFO")
		return (2);
	else if (level == "WARNING")
		return (3);
	else if (level == "ERROR")
		return (4);
	return (0);
}

void	Harl::complex_complain(std::string level)
{
	int	conv = level_convert(level);
	if (function_map.find(level) != function_map.end())
	{
		switch(conv)
		{
			case 1:
				(this->*function_map[level])();
				(this->*function_map["INFO"])();
				(this->*function_map["WARNING"])();
				(this->*function_map["ERROR"])();
				break;
			case 2:
				(this->*function_map[level])();
				(this->*function_map["WARNING"])();
				(this->*function_map["ERROR"])();
				break;
			case 3:
				(this->*function_map[level])();
				(this->*function_map["ERROR"])();
				break;
			case 4:
				(this->*function_map[level])();
				break;
		}
	}
	else
		std::cout << "No such level !" << std::endl;
}


Harl::~Harl() {}