#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 21, 5, "* piouuu piouuu piouuu *")
{
}

PlasmaRifle::PlasmaRifle(std::string const& name, int damage, int APCost) : AWeapon(name, damage, APCost, "* piouuu piouuu piouuu *")
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon (copy)
{
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "* delete PlasmaRifle *" << std::endl;
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	this->damage_ = other.damage_;
	this->APCost_ = other.APCost_;
	this->sounds_ = other.sounds_;

	return (*this);
}

void			PlasmaRifle::attack( )const
{
	std::cout << BLUE_COLOR << this->getSounds() << END_COLOR << std::endl;
}
