#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const	target_;
	
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		PresidentialPardonForm&		operator=(const PresidentialPardonForm &other);
		
		void						execute(Bureaucrat const &executor)const;
};

#endif