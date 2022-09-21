#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie dead_man;
	dead_man.name = name;
	std::cout << dead_man.name;
	announce();
}