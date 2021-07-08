#include "AMateria.hpp"

AMateria::AMateria(std::string type) : type_(type), xp_(0)
{
}

AMateria::AMateria(AMateria const &copy)
{
	this->type_ = copy.getType();
	this->xp_ = copy.getXP();
}

AMateria::~AMateria( )
{
}

AMateria&	AMateria::operator=(AMateria const &other)
{
	if (this == &other)
		return *this;
		
	this->type_ = other.type_;
	this->xp_ = other.xp_;
	return *this;
}

std::string const&		AMateria::getType()const
{
	return this->type_;
}

unsigned int			AMateria::getXP()const
{
	return this->xp_;
}


void		AMateria::use(ICharacter& target)
{
	(void)target;
	if (this->xp_ + 10 > UINT32_MAX)
		this->xp_ = UINT32_MAX;
	else
		this->xp_ += 10;
}
