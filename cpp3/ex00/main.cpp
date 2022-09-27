#include "ClapTrap.hpp"

int main()
{
	ClapTrap yo("niceguy");

	yo.beRepaired(10);
	std::cout << yo.getHitPoints() << std::endl;
	return (0);
}