#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern 
{
	public:
		Intern();
		Intern(const Intern  &copy);
		virtual ~Intern();
		Intern&	operator= (const Intern &other);

		Form		*makeForm(std::string form, std::string target);

		class UnknownFormException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif