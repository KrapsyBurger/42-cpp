#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		void	guardGate();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap();
};

#endif