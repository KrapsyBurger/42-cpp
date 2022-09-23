#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
{
	this->name = name;
	weapon_type = &Weapon;
}

void	HumanA::attack()
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << weapon_type->getType() << std::endl;
}

HumanA::~HumanA(){}