#include "Fixed.class.hpp"

Fixed::Fixed() : fixedPointValue_(0)
{
	std::cout << "* Default constructor called *" << std::endl;
}

Fixed::Fixed(const int d_value)
{
	std::cout << "* Default Int constructor called *" << std::endl;
	fixedPointValue_ = d_value << fractionalBits_;
}

Fixed::Fixed(const float f_value)
{
	std::cout << "* Default Float constructor called *" << std::endl;
	fixedPointValue_ = roundf(f_value * (1 << fractionalBits_));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "* Copy constructor called *" << std::endl;
	this->fixedPointValue_ = copy.fixedPointValue_;
}

Fixed::~Fixed()
{
	std::cout << "* Destructor called *" << std::endl;
}

int		Fixed::getRawBits()const
{
	std::cout << "* Method getRawBits called *" << std::endl;
	return (fixedPointValue_);
}

void	Fixed::setRawBits(int const value)
{
	std::cout << "* Method setRawBits called *" << std::endl;
	this->fixedPointValue_ = value;
}

int Fixed::toInt() const
{
	return (fixedPointValue_ >> fractionalBits_);
}

float Fixed::toFloat() const
{
	return ((float)(fixedPointValue_) / (float)(1 << fractionalBits_));
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "* Assignation operator called *" << std::endl;
	this->fixedPointValue_ = other.fixedPointValue_;
	return (*this);
}

std::ostream& operator << (std::ostream& out, Fixed const& value)
{
	return(out << value.toFloat());
}
