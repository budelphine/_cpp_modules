#include "Bureaucrat.hpp"
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
	std::cout << "Welcome to ex02 - No, you need form 28B, not 28C..." << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	Bureaucrat executor("executorBureaucrat", 1);
	// Bureaucrat executor("executorBureaucrat", 150);
	// Bureaucrat executor("executorBureaucrat", 50);
	std::cout << executor << std::endl;

	Form *treeCreationForm = new ShrubberyCreationForm("ForestForm");
	std::cout << *treeCreationForm << std::endl;

	try {
		std::cout << "* found first exception *" << std::endl;
		treeCreationForm->beSigned(executor);
		treeCreationForm->execute(executor);
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	Form *robot = new RobotomyRequestForm("RoboboboForm");
	std::cout << *robot << std::endl;
	
	try {
		std::cout << "* found second exception *" << std::endl;
		robot->beSigned(executor);
		robot->execute(executor);
		executor.executeForm(*robot);
		executor.executeForm(*robot);
		executor.executeForm(*robot);
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	Form *president = new PresidentialPardonForm("TrumphForm");
	std::cout << *president << std::endl;

	try {
		std::cout << "* found second exception *" << std::endl;
		president->beSigned(executor);
		president->execute(executor);
		executor.executeForm(*president);
		std::cout << BLUE_COLOR << "* exception NOT found *" << END_COLOR << std::endl;
	} catch (std::exception const &e) {
		std::cout << VIOLET_COLOR << "* exception found *" << END_COLOR << std::endl;
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "* Afterlife *" << std::endl;
	delete treeCreationForm;
	delete robot;
	delete president;
	return 0;
}
