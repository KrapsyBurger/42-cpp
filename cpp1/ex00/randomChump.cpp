#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie dead_man;
	dead_man.setName(name);
	std::cout << dead_man.getName();
	dead_man.announce();
}