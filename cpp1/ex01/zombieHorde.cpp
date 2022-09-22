#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	int	   index = 0;

	while (index < N)
	{
		horde[index].setName(name);
		index++;
	}
	return (horde);
}