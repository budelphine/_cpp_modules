#include <iostream>
#include <string>
#include <iomanip>
#include "Human.hpp"
#include "Brain.hpp"

int main()
{
	Human	bob;

	std::cout << "Welcome to ex05 -  HI BRAIN THIS IS HUMAN" << std::endl << std::endl;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
