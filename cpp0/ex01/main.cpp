#include "PhoneBook.hpp"

int	digitCheck(std::string line)
{
	unsigned long i = 0;
	while (i < line.length())
	{
		if (line[i] < '0' || line[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	PhoneBook phonebook;
	std::string line;
	int	contact = 0;

	while(1)
	{
		std::cout << "What do you want to do ? (SEARCH, ADD OR EXIT ARE POSSIBLE)" << std::endl;
		if (std::getline(std::cin, line).good() == 0)
			return (1);
		if (line == "ADD")
		{
			if (phonebook.function_add() == 2)
				return (1);
		}
		else if (line == "SEARCH")
		{
			phonebook.function_search();
			std::cout << std::endl;
			std::cout << "Enter an index to show details." << std::endl;
			if (std::getline(std::cin, line).good() == 0)
				return (1);
			std::istringstream is(line);
			is >> contact;
			if (digitCheck(line) == 1)
				std::cout << "You should enter a normal value !" << std::endl << std::endl;
			else if (contact < phonebook.getContactNbr())
				phonebook.print_contact(contact);
			else if (contact > 7)
				std::cout << "Cannot have more than 8 contacts ! Wrong arguments." << std::endl << std::endl;
			else if (contact + 1 > phonebook.getContactNbr())
				std::cout << "I dont have more than " << contact << " contact !" << std::endl << std::endl;
		}
		else if (line == "EXIT")
			break ;
	}
	return (0);
}