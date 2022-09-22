#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *ptr;
	ptr = new Zombie;
	ptr->setName(name);
	return (ptr);
}