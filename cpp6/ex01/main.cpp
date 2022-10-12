#include "Serialize.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *coucou = NULL;
	Data *bonsoir = NULL;
	coucou = (Data *)malloc(sizeof(Data) * 1);
	coucou->a = 5;
	coucou->b = 2;

	uintptr_t oui = serialize(coucou);
	bonsoir = deserialize(oui);
	//std::cout << serialize(coucou) << std::endl;
	std::cout << deserialize(oui)->b << std::endl;
	std::cout << bonsoir->a << std::endl;
	//std::cout << deserialize(serialize(coucou))->a << std::endl;
	return (0);
}