#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("YES");

	std::cout << "HP : " << a.getHitPoints() << std::endl;
	std::cout << "EP : " << a.getEnergyPoints() << std::endl;
	a.whoAmI();
	return (0);
}