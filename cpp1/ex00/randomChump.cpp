#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie dead_man;
	dead_man.setName(name);
	dead_man.announce();
}