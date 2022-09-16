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

std::string Contact::getInfo(Contact tab[8], int contact_nbr, int i)
{
	return (tab[contact_nbr].info[i]);
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
	if (this->contact_nbr == 8)
		this->contact_nbr = 7;
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
	this->contact_nbr++;
	return (0);
}

int	PhoneBook::function_search()
{
	int	new_contact_nbr = 0;
	int	info_idx = 0;
	int	putchar_idx = 0;

	while (new_contact_nbr < this->contact_nbr)
	{
		std::cout.width(10);
		std::cout << new_contact_nbr << "|";
		while (info_idx < 3)
		{
			if (this->tab[new_contact_nbr].getInfo(this->tab, new_contact_nbr, info_idx).size() < 10)
			{
				std::cout.width(10);
				std::cout << this->tab[new_contact_nbr].getInfo(this->tab, new_contact_nbr, info_idx) << "|";
			}
			else if (this->tab[new_contact_nbr].getInfo(this->tab, new_contact_nbr, info_idx).size() >= 10)
			{
				while (putchar_idx < 9)
				{
					putchar(this->tab[new_contact_nbr].getInfo(this->tab, new_contact_nbr, info_idx)[putchar_idx]);
					putchar_idx++;
				}
				std::cout << ".|";
				putchar_idx = 0;
			}
			info_idx++;
		}
		std::cout << std::endl;
		info_idx = 0;
		new_contact_nbr++;
	}
	return (0);
}

int	PhoneBook::print_message(int i)
{
	if (i == 0)
		std::cout << "First name : ";
	else if (i == 1)
		std::cout << "Last name : ";
	else if (i == 2)
		std::cout << "Nickname : ";
	else if (i == 3)
		std::cout << "Phone number : ";
	else if (i == 4)
		std::cout << "Darkest secret :";
	return (0);
}

int	PhoneBook::getContactNbr()
{
	return(this->contact_nbr);
}

int	PhoneBook::print_contact(int contact_idx)
{
	int	i = 0;
	
	while (i < 5)
	{
		PhoneBook::print_message(i);
		std::cout << this->tab[contact_idx].getInfo(this->tab, contact_idx, i) << std::endl;
		i++;
	}
	std::cout << std::endl;
	return (0);
}