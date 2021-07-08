#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardon Form", 25, 5), target_(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form(copy), target_(copy.target_)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)const
{
	Form::execute(executor);
	std::cout << this->target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
