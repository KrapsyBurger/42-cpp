#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap(std::string name);
		void	highFivesGuys();
		FragTrap(FragTrap const &obj);
		~FragTrap();
};

#endif