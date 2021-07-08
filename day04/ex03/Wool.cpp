#include "Wool.hpp"

Wool::Wool() : AMateria("Wool")
{
}

Wool::Wool(Wool const &copy) : AMateria(copy)
{
}

Wool::~Wool( )
{
}

Wool&	Wool::operator=(Wool const &other)
{
	if (this == &other)
		return *this;

	this->type_ = other.type_;
	this->xp_ = other.xp_;
	return *this;
}

AMateria*   Wool::clone() const {
	Wool* newWool = new Wool(*this);
	return newWool;
}

void        Wool::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* Makes wool mittens for " << target.getName() << " *" << std::endl;
}

