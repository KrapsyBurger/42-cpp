#include <iostream>

#ifndef __WEAPON_H__
#define __WEAPON_H__

class Weapon
{
	private:
		std::string			type;
	
	public:
		const std::string	getType();
		void				setType(std::string type);
		Weapon(std::string name);
		~Weapon();
};


#endif