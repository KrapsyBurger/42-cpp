#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::setName(name + "_clap_name");
	this->FragTrap::setHP(100);
	this->ScavTrap::setEP(50);
	this->FragTrap::setAD(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj) {}

void	DiamondTrap::attack()
{
	this->ScavTrap::attack("target");
}

void	DiamondTrap::whoAmI()
{
	std::cout << "i am Diamond : " << this->name << std::endl;
	std::cout << "i am ClapTrap : " << this->ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}