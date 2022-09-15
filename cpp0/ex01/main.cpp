/*
creer une classe qui prend dans le constructeur par defaut un int

creer deux fonctions membre
-> une qui incremente l'int
-> une qui decremente l'int

creer un geter de int
*/

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string line;
	while(1)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.function_add();
		else if (line == "SEARCH")
			phonebook.function_search();
	}
	return (0);
}