#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequest Form", 72, 45), target_(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy), target_(copy.target_)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor)const
{
	Form::execute(executor);
	std::cout << "* Some drilling noises *" << std::endl;
	if (std::rand() % 2)
	{
		std::cout << this->target_ << " has been robotomized successfully" << std::endl;
	}
}
