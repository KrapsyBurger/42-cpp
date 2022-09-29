#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {}

void	ScavTrap::guardGate()
{
	std::cout << "Entering Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {};