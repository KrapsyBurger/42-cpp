#include <iostream>

class Contact
{
	private:
		std::string info[5];
	public:
		int	setInfo(Contact tab[8], int contact_nbr, int i, std::string line);
		int	print_info(Contact tab[8], int contact_nbr, int idx);
		std::string getInfo(Contact tab[8], int contact_nbr, int i);
		Contact();
		~Contact();
};

class PhoneBook
{
	private:
		int		contact_nbr;
		Contact tab[8];
	public:
		PhoneBook();
		int function_add();
		int	function_search();
		int	enter_messages(int i);
		int	print_contact(int contact_idx);
		int	print_message(int i);
		int	getContactNbr();
		~PhoneBook();
		std::string getCont(int i);
};