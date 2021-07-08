#include "span.hpp"
 
int main()
{
	std::cout << "Welcome to ex01 - Span" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << VIOLET_COLOR << "* Test I - with normal param *" << END_COLOR << std::endl;
	std::cout << std::endl;

	Span spNormal = Span(5);
	spNormal.addNumber(5);
	spNormal.addNumber(3);
	spNormal.addNumber(17);
	spNormal.addNumber(9);
	spNormal.addNumber(11);

	std::cout << BLUE_COLOR << "* Print value *" << END_COLOR << std::endl;
	spNormal.printValue();
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* Shortest and longest span *" << END_COLOR << std::endl;
	std::cout << "shortest Span: " << spNormal.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spNormal.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << VIOLET_COLOR << "* Test II - with mono param *" << END_COLOR << std::endl;
	std::cout << std::endl;

	Span spMono = Span(5);
	spMono.addNumber(42, 5);

	std::cout << BLUE_COLOR << "* Print value *" << END_COLOR << std::endl;
	spMono.printValue();
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* Shortest and longest span *" << END_COLOR << std::endl;
	std::cout << "shortest Span: " << spMono.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spMono.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << VIOLET_COLOR << "* Test III - with some no mono param *" << END_COLOR << std::endl;
	std::cout << std::endl;

	Span spNoMono = Span(5);
	spNoMono.addNumber(3);
	spNoMono.addNumber(42, 3);
	spNoMono.addNumber(93);

	std::cout << BLUE_COLOR << "* Print value *" << END_COLOR << std::endl;
	spNoMono.printValue();
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* Shortest and longest span *" << END_COLOR << std::endl;
	std::cout << "shortest Span: " << spNoMono.shortestSpan() << std::endl;
	std::cout << "longest  Span: " << spNoMono.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << VIOLET_COLOR << "* Test IV - exception *" << END_COLOR << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* addNumber - ArrayIsFullException *" << END_COLOR << std::endl;
	try {
		Span spExc = Span(5);
		spNoMono.addNumber(42, 5);
		spNoMono.addNumber(42);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* addNumber - OutOfIndexException *" << END_COLOR << std::endl;
	try {
		Span spExc = Span(5);
		spExc.addNumber(42, 4);
		spExc.addNumber(42, 4);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* shortestSpan - ToFewElementException *" << END_COLOR << std::endl;
	try {
		Span spExc = Span(1);
		spExc.addNumber(42);
		spExc.shortestSpan();
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* longestSpan - ToFewElementException *" << END_COLOR << std::endl;
	try {
		Span spExc = Span(1);
		spExc.longestSpan();
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "* Test IV - exception *" << END_COLOR << std::endl;
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* copy *" << END_COLOR << std::endl;
	Span spCopy = Span(spNormal);
	spCopy.printValue();
	std::cout << std::endl;

	std::cout << BLUE_COLOR << "* operator= *" << END_COLOR << std::endl;
	spCopy = spMono;
	spCopy.printValue();
	std::cout << std::endl;	

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "* Test V - leaks *" << END_COLOR << std::endl;
	int i = 1;
	while (i)
		i++;

	return 0;
}