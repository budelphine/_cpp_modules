#include "whatever.hpp"

int main()
{
	std::cout << "Welcome to ex00 - A few functions" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	// test for int
	int a = 1;
	int b = 2;

	std::cout << VIOLET_COLOR << "Test for int:" << END_COLOR << std::endl;

	std::cout << BLUE_COLOR << "* swap *" << END_COLOR << std::endl;
	std::cout << "(a, b) = " << a << " " << b << std::endl;
	swap(a, b);
	std::cout << "(a, b) = " << a << " " << b << std::endl;
	std::cout << std::endl;
	
	std::cout << BLUE_COLOR << "* min *" << END_COLOR << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* max *" << END_COLOR << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << std::endl;

	// test for char
	char c = 'A';
	char d = 'Z';

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "Test for char:" << END_COLOR << std::endl;

	std::cout << BLUE_COLOR << "* swap *" << END_COLOR << std::endl;
	std::cout << "(c, d) = " << c << " " << d << std::endl;
	swap(c, d);
	std::cout << "(c, d) = " << c << " " << d << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* min *" << END_COLOR << std::endl;
	std::cout << "min(c, d) = " << min(c, d) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* max *" << END_COLOR << std::endl;
	std::cout << "max(c, d) = " << max(c, d) << std::endl;
	std::cout << std::endl;


	// test for string
	std::string s1("abc");
	std::string s2("xyz");

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "Test for string:" << END_COLOR << std::endl;

	std::cout << BLUE_COLOR << "* swap *" << END_COLOR << std::endl;
	std::cout << "(s1, s2) = " << s1 << " " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "(s1, s2) = " << s1 << " " << s2 << std::endl;
	std::cout << std::endl;
	
	std::cout << BLUE_COLOR << "* min *" << END_COLOR << std::endl;
	std::cout << "min(s1, s2) = " << min(s1, s2) << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* max *" << END_COLOR << std::endl;
	std::cout << "max(s1, s2) = " << max(s1, s2) << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	return 0;
}