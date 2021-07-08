#include "Form.hpp"

std::string	Form::getName()const { return this->name_; }
int			Form::getGradeToSign()const { return this->gradeToSign_; }
int			Form::getGradeToExecute()const { return this->gradeToExecute_; }
bool		Form::getSign()const { return this->sign_; }

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name_(name), sign_(false), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if (this->gradeToSign_ < MAX_GRADE || this->gradeToExecute_ < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (this->gradeToSign_ > MIN_GRADE || this->gradeToExecute_ > MIN_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : name_(copy.name_), gradeToSign_(copy.gradeToSign_), gradeToExecute_(copy.gradeToExecute_)
{
	this->sign_ = copy.sign_;
	if (this->gradeToSign_ < MAX_GRADE || this->gradeToExecute_ < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (this->gradeToSign_ > MIN_GRADE || this->gradeToExecute_ > MIN_GRADE)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "* " << this->name_ << " destruction *" << std::endl;
}

Form&	Form::operator=(const Form &other)
{
	this->sign_ = other.sign_;
	return *this;
}

std::ostream& operator << (std::ostream& out, Form const& form)
{
	out << "FormName: " << form.getName();
	out << ", GradeToSign: " << form.getGradeToSign();
	out << ", GradeToExecute: " << form.getGradeToExecute();
	out << ((form.getSign() == true) ? " is signed" : " not signed");
	return out;
}

void		Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->gradeToSign_ < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->sign_ = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Exception - Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Exception - Grade too low";
}
