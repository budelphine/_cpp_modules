#include "Fixed.class.hpp"

Fixed::Fixed() : fixedPointValue_(0)
{
	std::cout << "* Default constructor called *" << std::endl;
}

Fixed::Fixed(int fixedPointValue) : fixedPointValue_(fixedPointValue)
{
	std::cout << "* Default constructor called *" << std::endl;
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
	return this->fixedPointValue_;
}

void	Fixed::setRawBits(int const value)
{
	std::cout << "* Method setRawBits called *" << std::endl;
	this->fixedPointValue_ = value;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "* Assignation operator called *" << std::endl;
	this->fixedPointValue_ = other.fixedPointValue_;
	return (*this);
}
