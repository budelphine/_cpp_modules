#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const	target_;
		std::string			tree_;
	
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&		operator=(const ShrubberyCreationForm &other);
		
		void						execute(Bureaucrat const &executor)const;

		class FileOpenException: public std::exception {
			virtual const char* what() const throw();
		};

		class WriteException: public std::exception {
			virtual const char* what() const throw();
		};
};

#endif