#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	Weapon club = Weapon("crude spiked club");

	HumanA nathan("Nathan", club);
	HumanB jim("Jim");

	jim.attack();
	jim.setWeapon(club);
	nathan.attack();
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	nathan.attack();
	return (0);
}