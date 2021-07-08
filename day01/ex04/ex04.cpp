# include <iostream>
# include <string>
# include <iomanip>

int	main()
{
	std::cout << "Welcome to ex04 - HI THIS IS BRAIN" << std::endl << std::endl;

	std::string	strOriginal = "HI THIS IS BRAIN";
	std::string	*strPointer = &strOriginal;
	
	std::cout << "Get string from Pointer: " << *strPointer << std::endl;
	
	std::string	&strRef = strOriginal;
	std::cout << "Get string from Reference: " << strOriginal << std::endl;

	return 0;
}