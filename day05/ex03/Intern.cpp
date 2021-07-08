#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern()
{
	std::cout << "* Intern destruction *" << std::endl;
}

Intern&	Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Form*	makeShrubberyForm(std::string const &target) {return new ShrubberyCreationForm(target);}

Form*	makeRobotomyForm(const std::string &target) {return new RobotomyRequestForm(target);}

Form*	makePresidentalForm(const std::string &target) {return new PresidentialPardonForm(target);}

Form*	Intern::makeForm(std::string form, std::string target)
{
	Form*	(*formFunc[3])(std::string const &) = {
			&makeShrubberyForm,
			&makeRobotomyForm,
			&makePresidentalForm
	};
	std::string 	formName[3] = {
			"Shrubbery Creation",
			"Robotomy Request",
			"Presidential Pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if (form == formName[i])
		{
			std::cout << "Intern make " << formName[i] << " Form" << std::endl;
			return (*formFunc[i])(target);
		}
	}

	throw UnknownFormException();
	return nullptr;
}

const char* Intern::UnknownFormException::what() const throw()
{
	return "Intern Exception - Form is unknown";
}

