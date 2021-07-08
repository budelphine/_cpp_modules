#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

int main()
{
	std::cout << "Welcome to ex03 - At least this beats coffee-making..." << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	Intern intern;
	try {
		std::cout << "* found first exception *" << std::endl;
		Form *random = intern.makeForm("Shrubbery Creation", "Forest");
		std::cout << std::endl << *random << std::endl;
		delete random;
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << "* found second exception *" << std::endl;
		Form *form = intern.makeForm("Unknown form", "Unknown");
		std::cout << *form << std::endl;
		delete form;
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "* Afterlife *" << std::endl;
	return 0;
}
