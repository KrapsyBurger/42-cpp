#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHP(100);
	setEP(50);
	setAD(20);
	std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj) {}

void	ScavTrap::guardGate()
{
	std::cout << "Entering Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}