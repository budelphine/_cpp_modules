#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type_ = "Some type";
}
Weapon::Weapon(std::string type)
{
	this->type_ = type;
}

void			Weapon::setType(std::string type)
{
	this->type_ = type;
}
std::string		&Weapon::getType()
{
	std::string &ref = this->type_;

	return (ref);
}
