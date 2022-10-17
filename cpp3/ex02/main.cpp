#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap jimmy(std::string("Jimmy"));
	ScavTrap antoine(std::string("Antoine"));
	FragTrap philippe("Philippe");
        
    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
	std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;
    
    jimmy.attack(std::string("a zombie"));
	antoine.attack(std::string("a zombie"));
	philippe.attack(std::string("a zombie"));
    
    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
	std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;
    
    jimmy.takeDamage(2);
	antoine.takeDamage(2);
	philippe.takeDamage(2);

    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
	std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;

	antoine.beRepaired(3);
    jimmy.beRepaired(3);
	philippe.beRepaired(3);

    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
	std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;

    jimmy.takeDamage(8);
	antoine.takeDamage(8);
	antoine.takeDamage(8);

    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
    std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;

    jimmy.attack(std::string("a zombie"));
	antoine.guardGate();
	philippe.highFivesGuys();
    
    std::cout << "Jimmy HP : " << jimmy.getHitPoints() << std::endl;
	std::cout << "Jimmy EP : " << jimmy.getEnergyPoints() << std::endl;
	std::cout << "Antoine HP : " << antoine.getHitPoints() << std::endl;
	std::cout << "Antoine EP : " << antoine.getEnergyPoints() << std::endl;
	std::cout << "Philippe HP : " << philippe.getHitPoints() << std::endl;
	std::cout << "Philippe EP : " << philippe.getEnergyPoints() << std::endl << std::endl;

	return (0);
}