#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_nbr = 0;
	std::cout << "phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "phonebook destructor called" << std::endl;
}

Contact::Contact()
{
	std::cout << "contact constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "contact destructor called" << std::endl;
}

int Contact::setInfo(Contact tab[8], int contact_nbr, int i, std::string line)
{
	tab[contact_nbr].info[i] = line;
	return (0);
}

int Contact::print_info(Contact tab[8], int contact_nbr, int idx)
{
	std::cout << tab[contact_nbr].info[idx] << "|" << std::endl;
	return (0);
}

int	PhoneBook::enter_messages(int i)
{
	if (i == 0)
		std::cout << "enter first name :" << std::endl;
	else if (i == 1)
		std::cout << "enter last name :" << std::endl;
	else if (i == 2)
		std::cout << "enter nickname :" << std::endl;
	else if (i == 3)
		std::cout << "enter phone number :" << std::endl;
	else if (i == 4)
		std::cout << "enter darkest secret :" << std::endl;
	return (0);
}

int PhoneBook::function_add()
{
	int	i = 0;
	std::string addline;
	while (i < 5)
	{
		PhoneBook::enter_messages(i);
		std::getline(std::cin, addline);
		if (addline.size() == 0)
			std::cout << "This can't be empty !" << std::endl;
		else 
		{
			this->tab[contact_nbr].setInfo(this->tab, this->contact_nbr, i, addline);
			i++;
		}
	}
	std::cout << "Contact created.\n" << std::endl;
	//this->tab[contact_nbr].print_contact(this->tab, this->contact_nbr);
	this->contact_nbr++;
	return (0);
}

int	PhoneBook::function_search()
{
	int	new_contact_nbr = 0;

	while (new_contact_nbr < this->contact_nbr)
	{
		std::cout.width(10);
		std::cout << new_contact_nbr << "|";
		std::cout.width(10);
		std::cout << "ffffffffffffffff" << "|";
		// this->tab[new_contact_nbr].print_info(this->tab, new_contact_nbr, 1);
		new_contact_nbr++;
	}
	return (0);
}
