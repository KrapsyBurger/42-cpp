#include <iostream>
#include "Weapon.hpp"

#ifndef __HUMANB_H__
#define __HUMANB_H__

class HumanB
{
	private:
		std::string name;
		Weapon		*weapon_type;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
		~HumanB();
};


#endif