#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

# define MAX_GRADE	1
# define MIN_GRADE	150

class Form 
{
	private:
		std::string const		name_;
		bool					sign_;
		int	const				gradeToSign_;
		int const				gradeToExecute_;

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

		class GradeTooHighException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception 
		{
			virtual const char* what() const throw();
		};	

};

std::ostream& operator<< (std::ostream& out, Form  const& Form );

#endif