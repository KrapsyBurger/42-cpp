#include "LeNomDeMaClasse.hpp"

PhoneBook::PhoneBook()
{
	this->cont = alloc(8)????? //comment je peux faire un bail du genre ?
	std::cout << "constructor arg called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "destructor called int nb" << std::endl;
}

std::string PhoneBook::getContLine(int i)
{
	return (this->cont[i]);
}

int PhoneBook::function_add()
{
	int	i = 0;
	/*appeler une fonction similaire a un gnl sur la sortie standard ?*/
	while (i < 5)
	{
		Contact::first_name = retour du gnl;
		i++;
		/*free le precedent retour et refaire un gnl*/
		Contact::last_name = retour du gnl;
		i++;
		/*free le precedent retour et refaire un gnl*/
		Contact::nickname = retour du gnl;
		i++;
		/*free le precedent retour et refaire un gnl*/
		Contact::phone_number = retour du gnl;
		i++;
		/*free le precedent retour et refaire un gnl*/
		Contact::darkest_secret = retour du gnl;
		i++;
	}
}

/*creer une fonction ADD, SEARCH, et EXIT*/
