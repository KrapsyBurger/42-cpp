#include "Zombie.hpp"

int main()
{
	Zombie class_stack;
	Zombie *class_heap;
	class_heap = class_stack.newZombie("connard");
	class_stack.randomChump("coucou");
	std::cout << class_heap->getName() << std::endl;
	delete class_heap;
}