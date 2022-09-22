#include "Zombie.hpp"

int main()
{
	Zombie *class_heap;
	class_heap = newZombie("connard");
	randomChump("coucou");
	std::cout << class_heap->getName() << std::endl;
	delete class_heap;
}
