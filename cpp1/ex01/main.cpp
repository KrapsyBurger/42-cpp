#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	horde = zombieHorde(10, "salut");
	delete[] horde;
	return (0);
}