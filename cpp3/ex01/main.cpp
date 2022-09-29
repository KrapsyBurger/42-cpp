#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("bonsoir");

	a.attack("salut");
	std::cout << a.getHitPoints() << std::endl;
	a.beRepaired(50); 
	std::cout << a.getHitPoints() << std::endl;
	a.guardGate();
	return (0);
}