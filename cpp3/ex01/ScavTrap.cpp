#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap default constructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Entering Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}