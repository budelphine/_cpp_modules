#include "MyAwesomePhoneBook.hpp"

int	main(void) 
{
	PhoneBook	phoneBook;
	std::string	command;

	std::cout << "Welcome to my Awesome Crappy PhoneBook" << std::endl;
	std::cout << "You can use one of this three command: " << std::endl;
	std::cout << "ADD, SEARCH and EXIT" << std::endl;

	while (!std::getline(std::cin, command).eof())
	{
		
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Some unxpected value. Please, try again" << std::endl;
		std::cout << "Use command - ADD, SEARCH and EXIT" << std::endl;
	}

	return 0;
}