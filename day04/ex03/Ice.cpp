#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
}

Ice::~Ice( )
{
}

Ice&	Ice::operator=(Ice const &other)
{
	if (this == &other)
		return *this;

	this->type_ = other.type_;
	this->xp_ = other.xp_;
	return *this;
}

AMateria*   Ice::clone() const {
	Ice* newIce = new Ice(*this);
	return newIce;
}

void        Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

