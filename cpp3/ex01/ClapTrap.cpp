#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	this->name = obj.name;
	this->hit_points = obj.hit_points;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0)
	{
		std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
		this->energy_points -= 1;
	}
	else
		std::cout << "No energy left do to this !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	std::cout << "Took " << amount << " hit points !" << std::endl;
	std::cout << this->hit_points << " hit points left !" << std::endl;
	if (this->hit_points <= 0)
	{
		std::cout << "My man is dead :(" << std::endl;
		this->energy_points = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		this->hit_points += amount;
		std::cout << "Gained " << amount << " hit points, ";
		std::cout << this->hit_points << " hit points left !" << std::endl;
		this->energy_points -= 1;
		std::cout << "Lost 1 energy points, " << this->energy_points << " energy points left !" << std::endl;
	}
	else
		std::cout << "No energy left to do this" << std::endl;
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return (this->energy_points);
}

unsigned int	ClapTrap::getHitPoints()
{
	return (this->hit_points);
}



ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}