#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie *first_zombie;
	Zombie *horde = new Zombie[N];
	int	   index = 0;

	first_zombie = horde;
	while (index < N)
	{
		horde[index].name = name;
		//std::cout << horde[index].name;
		//announce();
		index++;
	}
	return (first_zombie);
}