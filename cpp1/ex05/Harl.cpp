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

void	Harl::complain(std::string level)
{
	if (function_map.find(level) != function_map.end())
		(this->*function_map[level])();
	else
		std::cout << "No such level !" << std::endl;
}


Harl::~Harl() {}