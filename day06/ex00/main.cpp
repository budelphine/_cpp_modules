#include "ScalarConversion.hpp"

#include <string>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>

int main(int ac, char *av[])
{
	std::cout << "Welcome to ex00 - Scalar conversion!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}

	std::string	sValue(av[1]);

	try {
		ScalarConversion scalarConvertor(sValue);
		std::cout << scalarConvertor;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}