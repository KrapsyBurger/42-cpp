#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	private:
	public:
		void	guardGate();
		ScavTrap(std::string name);
		~ScavTrap();
		
};

#endif