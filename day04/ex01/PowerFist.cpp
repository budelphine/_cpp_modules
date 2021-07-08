#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 50, 8, "* pschhh... SBAM! *")
{
}

PowerFist::PowerFist(std::string const& name, int damage, int APCost) : AWeapon(name, damage, APCost, "* piouuu piouuu piouuu *")
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon (copy)
{
}

PowerFist::~PowerFist()
{
	std::cout << "* delete PowerFist *" << std::endl;
}

PowerFist&	PowerFist::operator=(PowerFist const &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	this->sounds_ = other.sounds_;
	this->damage_ = other.damage_;
	this->APCost_ = other.APCost_;

	return (*this);
}

void			PowerFist::attack( )const
{
	std::cout << BLUE_COLOR << this->getSounds() << END_COLOR << std::endl;
}
