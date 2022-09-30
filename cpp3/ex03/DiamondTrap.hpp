#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap : virtual public ClapTrap, virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string name;
	public:
		void	attack();
		void	whoAmI();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		~DiamondTrap();
};


#endif