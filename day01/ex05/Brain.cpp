#include "Brain.hpp"

Brain::Brain()
{
	this->identify_ = this->identify();
}

std::string	Brain::getIdentify()const
{
	return this->identify_;
}

std::string	Brain::identify()const
{
	std::ostringstream address;
	
	address << this;
	return (address.str());
}
