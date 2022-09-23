#include <iostream>
#include "Weapon.hpp"

#ifndef __HUMANA_H__
#define __HUMANA_H__

class HumanA
{
	private:
		std::string name;
		Weapon		&weapon_type;

	public:
		void	attack();
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
};

#endif