/*
creer une classe qui prend dans le constructeur par defaut un int

creer deux fonctions membre
-> une qui incremente l'int
-> une qui decremente l'int

creer un geter de int
*/

#include "LeNomDeMaClasse.hpp"

int main()
{
	nomdemaclasse a(12, "mabite");
	std::cout << a.getString() << std::endl;
	nomdemaclasse b;
	return (0);
}