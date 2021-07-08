#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

# define MAX_GRADE	1
# define MIN_GRADE	150

class Form 
{
	private:
		std::string const		name_;
		int const				gradeToSign_;
		int const				gradeToExecute_;
		bool					sign_;

		Form();

	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form  &copy);
		virtual ~Form();
		Form&	operator= (const Form  &other);

		std::string		getName()const;	
		int				getGradeToSign()const;
		int				getGradeToExecute()const;
		bool			getSign()const;

		void			beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &executor)const;

		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class FormIsNotSignedException: public std::exception 
		{
			virtual const char* what() const throw();
		};

};

std::ostream& operator<< (std::ostream& out, Form  const& Form );

#endif