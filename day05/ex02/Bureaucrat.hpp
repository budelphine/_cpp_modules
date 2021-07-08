#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
class Form;

# define MAX_GRADE	1
# define MIN_GRADE	150

class Bureaucrat 
{
	private:
		std::string		name_;
		int				grade_;

		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat  &copy);
		virtual ~Bureaucrat();
		Bureaucrat&	operator= (const Bureaucrat  &other);

		std::string		getName()const;	
		int				getGrade()const;

		void			incrementGrade();
		void			decrementGrade();
		void			signForm(Form &form)const;
		void			executeForm(Form const &form)const;

		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};	

};

std::ostream& operator<< (std::ostream& out, Bureaucrat  const& Bureaucrat );

#endif