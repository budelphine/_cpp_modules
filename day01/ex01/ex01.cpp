#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string* panther = new std::string("String panther (Bagira)");
	std::cout << *panther << std::endl;

	std::cout << "They think we need to play with " << *panther << std::endl;
	std::cout << "But I think we need to kill " << *panther << std::endl;
	delete panther;
	panther = NULL;
}

int		main(void) 
{
	std::cout << "Welcome to ex01 - Plumbing problem" << std::endl << std::endl;
	memoryLeak();
	return 0;
}

