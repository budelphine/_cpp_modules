#include "Fixed.class.hpp"

int		main(void) 
{
	std::cout << "Welcome to ex00 - My First Canonical Class" << std::endl ;
	std::cout << "---------------------------------------------" << std::endl << std::endl;

	Fixed a;
	Fixed b(a);
	Fixed c;
	
	std::cout << std::endl << "---------------------------------------------" << std::endl;
	c = b;
	
	std::cout << std::endl << "---------------------------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl << std::endl;
	std::cout << b.getRawBits() << std::endl << std::endl;
	std::cout << c.getRawBits() << std::endl << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	return 0;
}
