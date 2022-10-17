#include "Zombie.hpp"

int main()
{
	int i = 0;
	Zombie *horde;
	horde = zombieHorde(10, "salut");
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
