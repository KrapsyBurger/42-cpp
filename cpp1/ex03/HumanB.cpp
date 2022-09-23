#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon_type = &Weapon;
}

void	HumanB::attack()
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << weapon_type->getType() << std::endl;
}

HumanB::~HumanB() {}