#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string line;
	int	contact = 0;

	while(1)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.function_add();
		else if (line == "SEARCH")
		{
			phonebook.function_search();
			std::cout << std::endl;
			std::cout << "Enter an index to show details." << std::endl;
			std::getline(std::cin, line);
			contact = std::stoi(line);
			if (contact < phonebook.getContactNbr())
				phonebook.print_contact(contact);
			else if (contact > 7)
				std::cout << "Cannot have more than 8 contacts ! Wrong arguments." << std::endl;
			else if (contact + 1 > phonebook.getContactNbr())
				std::cout << "I dont have more than " << contact << " contact !" << std::endl;
		}
		else if (line == "EXIT")
			break ;
	}
	return (0);
}