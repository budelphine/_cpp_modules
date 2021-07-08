#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{	
}

std::string			HumanB::getName()
{
	return this->name_;
}

void				HumanB::setName(std::string name)
{
	this->name_ = name;
}

void				HumanB::setWeapon(Weapon &type)
{
	this->weapon_ = &type;
}

void				HumanB::attack()
{
	std::cout << this->getName() << " attacks with his " << (*(this->weapon_)).getType() << std::endl;
}
