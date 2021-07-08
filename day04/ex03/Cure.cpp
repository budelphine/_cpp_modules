#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
}

Cure::~Cure( )
{
}

Cure&	Cure::operator=(Cure const &other)
{
	if (this == &other)
		return *this;
	
	this->type_ = other.type_;
	this->xp_ = other.xp_;
	
	return *this;
}

AMateria*   Cure::clone() const {
	Cure* newCure = new Cure(*this);
	return newCure;
}

void        Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

