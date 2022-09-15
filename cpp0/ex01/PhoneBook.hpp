#include <iostream>

class Contact
{
	private:
		std::string info[5];
	public:
		int	setInfo(Contact tab[8], int contact_nbr, int i, std::string line);
		int	print_info(Contact tab[8], int contact_nbr, int idx);
		Contact();
		~Contact();
};

class PhoneBook
{
	/*
	private : acces que a l'interieur de la classe
	(dans le fichier .cpp)
	public : peut etre accede de partout
	*/
	private:
		int		contact_nbr;
		Contact tab[8];
	public:
		PhoneBook();
		int function_add();
		int	function_search();
		//int	trunc_info();
		int	enter_messages(int i);
		~PhoneBook();
		std::string getCont(int i);
};