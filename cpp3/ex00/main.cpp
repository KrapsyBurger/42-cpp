#include "ClapTrap.hpp"

int main()
{
    ClapTrap albert(std::string("Albert"));
        
    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;
    
    albert.attack(std::string("a zombie"));
    albert.takeDamage(3);
    
    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;
    
    albert.attack(std::string("a zombie"));
    albert.takeDamage(2);

    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;

    albert.beRepaired(1);

    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;

    albert.attack(std::string("a zombie"));
    albert.takeDamage(6);

    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;
    
    albert.attack(std::string("a zombie"));
    albert.takeDamage(2);
    
    std::cout << "Albert HP : " << albert.getHitPoints() << std::endl;
	std::cout << "Albert EP : " << albert.getEnergyPoints() << std::endl << std::endl;
	return (0);
}