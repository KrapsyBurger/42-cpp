#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("bonjour");

	a.attack("yoyoyo");
	std::cout << a.getEnergyPoints() << std::endl;
	a.highFivesGuys();
	return (0);
}