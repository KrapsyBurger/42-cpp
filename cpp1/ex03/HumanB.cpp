#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon_type = NULL;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon_type = &Weapon;
}

void	HumanB::attack()
{
	std::cout << this->name;
	if (weapon_type != NULL)
	{
		std::cout << " attacks with their ";
		std::cout << weapon_type->getType();
	}
	else
		std::cout << " has no weapon to attack !";
	std::cout << std::endl;
}

HumanB::~HumanB() {}