#include <iostream>

class PhoneBook
{
	/*
	private : acces que a l'interieur de la classe
	(dans le fichier .cpp)
	public : peut etre accede de partout
	*/
	private:
		char **cont;
	public:
		int function_add();
		~PhoneBook();
		std::string getContLine(int i);
};

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};