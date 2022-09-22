#include <iostream>

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

class Zombie
{
	public:

					Zombie();
					~Zombie();
		void 		announce(void);
		std::string	getName();
		Zombie		*newZombie(std::string name);
		Zombie		*zombieHorde(int N, std::string name);
	
	private:
		
		std::string name;
};

#endif