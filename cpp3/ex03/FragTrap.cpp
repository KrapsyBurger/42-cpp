#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHP(100);
	setEP(100);
	setAD(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) {}

void	FragTrap::highFivesGuys()
{
	std::cout << "Guys ! Let's do a high five !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}