#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <stdexcept>
# include <sstream>

class ScalarConversion {
	private:
		std::stringstream	out_;

		std::string		sValue_;
		char			cValue_;
		int				iValue_;
		float			fValue_;
		double			dValue_;

		bool			nanValue_;
		bool			negINFValue_;
		bool			posINFValue_;
		bool			isValid_;

		void			parser();
		void			parseINF();
		void			parseChar();
		void			parseFloat();
		void			parseDouble();
		void			parseInt();

	public:
		ScalarConversion(std::string sValue);
		ScalarConversion(const ScalarConversion &copy);
		~ScalarConversion();

		ScalarConversion&	operator=(const ScalarConversion &other);

		float		getFValue()const;
		int			getIValue()const;
		char		getCValue()const;
		double		getDValue()const;
		bool		getNanValue()const;
		bool		getNegINFValue()const;
		bool		getPosINFValue()const;
		std::string	toStr()const;

		class WrongArgumentException : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream& operator<< (std::ostream& out, ScalarConversion const& value);

#endif