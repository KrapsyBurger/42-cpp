#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "im the creator" << std::endl;
}

void	Zombie::announce()
{
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return(this->name);
}

Zombie::~Zombie() {
	std::cout << "im the destructor of" << this->name << std::endl;
}