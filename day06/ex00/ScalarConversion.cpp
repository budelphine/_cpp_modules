#include "ScalarConversion.hpp"
#include <cctype>

ScalarConversion::ScalarConversion(std::string sValue) : sValue_(sValue), nanValue_(false), negINFValue_(false), posINFValue_(false), isValid_(true)
{
	parser();
}

ScalarConversion::ScalarConversion(const ScalarConversion &copy)
{
	this->sValue_ = copy.sValue_;
	this->cValue_ = copy.cValue_;
	this->iValue_ = copy.iValue_;
	this->fValue_ = copy.fValue_;
	this->dValue_ = copy.dValue_;

	this->nanValue_ = copy.nanValue_;
	this->negINFValue_ = copy.negINFValue_;
	this->posINFValue_ = copy.posINFValue_;
	this->isValid_ = copy.isValid_;
}

ScalarConversion::~ScalarConversion()
{
}

ScalarConversion&	ScalarConversion::operator=(const ScalarConversion &other)
{
	this->sValue_ = other.sValue_;
	this->cValue_ = other.cValue_;
	this->iValue_ = other.iValue_;
	this->fValue_ = other.fValue_;
	this->dValue_ = other.dValue_;

	this->nanValue_ = other.nanValue_;
	this->negINFValue_ = other.negINFValue_;
	this->posINFValue_ = other.posINFValue_;
	return (*this);
}

std::ostream& operator << (std::ostream& out, ScalarConversion const& value)
{
	return out << value.toStr();
}

void		ScalarConversion::parseINF()
{
	if (this->sValue_.compare("-inf"))
		negINFValue_ = true;

	if (this->sValue_.compare("+inf"))
		posINFValue_ = true;

	if (this->sValue_.compare("nan"))
		nanValue_ = true;

	this->cValue_ = '\0';
	this->iValue_ = 0;
	this->fValue_ = std::stof(this->sValue_);
	this->dValue_ = std::stod(this->sValue_);
	
	this->out_ << "char: impossible" << std::endl;
	this->out_ << "int: impossible" << std::endl;
	this->out_ << "float: " << this->fValue_ << std::endl;
	this->out_ << "char: " << this->dValue_ << std::endl;
	this->isValid_ = false;
}

void		ScalarConversion::parseChar()
{
	this->cValue_ = this->sValue_[0];
	this->iValue_ = static_cast<int>(this->sValue_[0]);
	this->fValue_ = static_cast<float>(this->sValue_[0]);
	this->dValue_ = static_cast<double>(this->sValue_[0]);

	if (isprint(this->iValue_))
		this->out_ << "char: " << "'" << this->cValue_ << "'" << std::endl;
	else
		this->out_ << "char: Non displayable" << std::endl;
	this->out_ << "int: " << this->iValue_ << std::endl;
	this->out_ << "float: " << std::fixed << std::setprecision(1) << this->fValue_ << "f" << std::endl;
	this->out_ << "double: " << std::fixed << std::setprecision(1) << this->dValue_ << std::endl;
}

void		ScalarConversion::parseFloat()
{
	try {
		std::size_t	pos = 0;
		this->fValue_ = std::stof(this->sValue_, &pos);
		if (++pos != this->sValue_.size())
		{
			throw ScalarConversion::WrongArgumentException();
			this->isValid_ = false;
			return ;
		}
	}
	catch (const std::out_of_range & e) {
		this->isValid_ = false;
		throw std::out_of_range("Argument is Overflow Float");
	}

	this->cValue_ = static_cast<char>(this->fValue_);
	this->iValue_ = static_cast<int>(this->fValue_);
	this->dValue_ = static_cast<double>(this->fValue_);

	if (isprint(this->iValue_))
		this->out_ << "char: " << "'" << this->cValue_ << "'" << std::endl;
	else
		this->out_ << "char: Non displayable" << std::endl;
	this->out_ << "int: " << this->iValue_ << std::endl;
	this->out_ << "float: " << std::fixed << std::setprecision(1) << this->fValue_ << "f" << std::endl;
	this->out_ << "double: " << std::fixed << std::setprecision(1) << this->dValue_ << std::endl;
}

void		ScalarConversion::parseDouble()
{
	try {
		std::size_t	pos = 0;
		this->dValue_ = std::stod(this->sValue_, &pos);
		if (pos != this->sValue_.size())
		{
			throw ScalarConversion::WrongArgumentException();
			this->isValid_ = false;
			return ;
		}
	}
	catch (const std::out_of_range & e) {
		this->isValid_ = false;
		throw std::out_of_range("Argument is Overflow Double");
	}

	this->cValue_ = static_cast<char>(this->dValue_);
	this->iValue_ = static_cast<int>(this->dValue_);
	this->fValue_ = static_cast<float>(this->dValue_);

	if (isprint(this->iValue_))
		this->out_ << "char: " << "'" << this->cValue_ << "'" << std::endl;
	else
		this->out_ << "char: Non displayable" << std::endl;
	this->out_ << "int: " << this->iValue_ << std::endl;
	this->out_ << "float: " << std::fixed << std::setprecision(1) << this->fValue_ << "f" << std::endl;
	this->out_ << "double: " << std::fixed << std::setprecision(1) << this->dValue_ << std::endl;
}

void		ScalarConversion::parseInt()
{
	try {
		std::size_t	pos = 0;
		this->iValue_ = std::stoi(this->sValue_, &pos);
		if (pos != this->sValue_.size())
		{
			throw ScalarConversion::WrongArgumentException();
			this->isValid_ = false;
			return ;
		}
	}
	catch (const std::out_of_range & e) {
		this->isValid_ = false;
		throw std::out_of_range("Argument is Overflow Int");
	}

	this->cValue_ = static_cast<char>(this->iValue_);
	this->dValue_ = static_cast<double>(this->iValue_);
	this->fValue_ = static_cast<float>(this->iValue_);

	if (isprint(this->iValue_))
		this->out_ << "char: " << "'" << this->cValue_ << "'" << std::endl;
	else
		this->out_ << "char: Non displayable" << std::endl;
	this->out_ << "int: " << this->iValue_ << std::endl;
	this->out_ << "float: " << std::fixed << std::setprecision(1) << this->fValue_ << "f" << std::endl;
	this->out_ << "double: " << std::fixed << std::setprecision(1) << this->dValue_ << std::endl;
}

void		ScalarConversion::parser()
{
	if (this->sValue_ == "-inf" || this->sValue_ == "+inf" || this->sValue_ == "nan" || \
		this->sValue_ == "-inff" || this->sValue_ == "+inff" || this->sValue_ == "nanf")
		parseINF();
	else if (sValue_.length() == 1 && !isdigit(this->sValue_[0]))
		parseChar();
	else if ((int)this->sValue_.find("f") != -1)
		parseFloat();
	else if ((int)this->sValue_.find(".") != -1)
		parseDouble();
	else 
		parseInt();
}

std::string	ScalarConversion::toStr()const
{
	return this->out_.str();
}

const char* ScalarConversion::WrongArgumentException::what() const throw()
{
	return "Argument is Wrong";
}
