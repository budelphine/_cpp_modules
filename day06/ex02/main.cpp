#include <iostream>
#include <string>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

Base* generate(void)
{
	int type = rand() % 3;

	if (type == 0)
		return new A;
	else if (type == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base* ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "Class A pointer" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "Class B pointer" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "Class C pointer" << std::endl;
	else
		std::cout << "Not a child class of Base" << std::endl;
}

void identify_from_reference(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Class A reference" << std::endl;
		return ;
	} catch (...) {}

	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Class B reference" << std::endl;
		return ;
	} catch (...) {}

	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Class C reference" << std::endl;
		return ;
	} catch (...) {}

	std::cout << "Not a child class of Base" << std::endl;
}

int main()
{
	std::cout << "Welcome to ex02 - Identify real type" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	srand(time(0));

	void	*someNull = nullptr;
	Base*	base = generate();
	Base&	ref = *base;
	
	std::cout << VIOLET_COLOR << "* Check pointer *" << END_COLOR << std::endl;
	identify_from_pointer(base);
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* Check reference *" << END_COLOR << std::endl;
	identify_from_reference(ref);
	std::cout << std::endl;

	std::cout << RED_COLOR << "* Check NULL pointer *" << END_COLOR << std::endl;
	identify_from_pointer(reinterpret_cast<Base *>(someNull));
	return 0;
}
