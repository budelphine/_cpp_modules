#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon)
{	
}

std::string			HumanA::getName()
{
	return this->name_;
}

void				HumanA::setName(std::string name)
{
	this->name_ = name;
}

void				HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << this->weapon_.getType() << std::endl;
}