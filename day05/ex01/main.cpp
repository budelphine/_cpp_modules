#include "Bureaucrat.hpp"
#include "Form.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

int main()
{
	std::cout << "Welcome to ex01 - Form up, maggots!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	Bureaucrat bob("Bob", 100);
	std::cout << bob << std::endl;
	bob.incrementGrade();
	std::cout << "increment: " << bob << std::endl;
	bob.decrementGrade();
	// bob.decrementGrade();
	std::cout << "decrement: " << bob << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "* found first exception *" << std::endl;
		Form f12("f12", 0, 100);
		std::cout << f12 << std::endl;
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << "* found second exception *" << std::endl;
		Form f12("f12", 120, 120);
		std::cout << f12 << std::endl;
		bob.signForm(f12);
		std::cout << f12 << std::endl;
		bob.signForm(f12);
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << "* found third exception *" << std::endl;
		Form f12("f12", 80, 120);
		std::cout << f12 << std::endl;
		bob.signForm(f12);
		std::cout << f12 << std::endl;
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "* Afterlife *" << std::endl;
	return 0;
}
