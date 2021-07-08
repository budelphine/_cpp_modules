#include "Bureaucrat.hpp"

std::string	Bureaucrat::getName()const { return this->name_; }
int			Bureaucrat::getGrade()const { return this->grade_; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade)
{
	if (this->grade_ < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_ > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	this->name_ = copy.name_;
	this->grade_ = copy.grade_;
	if (this->grade_ < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_ > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "* " << this->name_ << " destruction *" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	this->name_ = other.name_;
	this->grade_ = other.grade_;
	if (this->grade_ < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_ > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

std::ostream& operator << (std::ostream& out, Bureaucrat const& bureaucrat)
{
	out << bureaucrat.getName();
	out << ", bureaucrat grade ";
	out << bureaucrat.getGrade();
	return out;
}

void		Bureaucrat::incrementGrade()
{
	this->grade_--;
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decrementGrade()
{
	this->grade_++;
	if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::signForm(Form &form)const
{
	if (form.getSign())
	{
		std::cout << "Form " << form.getName() << " is already sign" << std::endl;
	}
	else if (this->grade_ > form.getGradeToSign())
	{
		std::cout << "Form " << form.getName() << " can't be signed because";
		std::cout << " bureaucrat grade is to low" << std::endl;
	}
	else 
	{
		std::cout << "FormName: " << form.getName() << " was sign by " << this->name_ << std::endl;
	}
	form.beSigned(*this);
}

void		Bureaucrat::executeForm(const Form &form)const
{
	try {
		form.execute(*this);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat Exception - Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat Exception - Grade too low";
}
