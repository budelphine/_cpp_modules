#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const	target_;
	
		RobotomyRequestForm();
		
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		RobotomyRequestForm&		operator=(const RobotomyRequestForm &other);
		
		void						execute(Bureaucrat const &executor)const;
};

#endif