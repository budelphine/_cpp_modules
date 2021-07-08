#include <iostream>
#include "Fixed.class.hpp"

int main() {
	std::cout << "Welcome to ex01 - Towards a more useful fixed point class" << std::endl ;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	std::cout << "---------------------------------------------" << std::endl;

	a = Fixed( 1234.4321f );
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	return 0;
}