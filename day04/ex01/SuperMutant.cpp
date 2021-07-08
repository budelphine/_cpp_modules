#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << RED_COLOR << "Gaaah. Me want smash heads!" << END_COLOR << std::endl;
}

SuperMutant::SuperMutant(int hitPoint, std::string const& type) : Enemy(hitPoint, type)
{
	std::cout << RED_COLOR << "Gaaah. Me want smash heads!" << END_COLOR << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy (copy)
{
	std::cout << RED_COLOR << "Gaaah. Me want smash heads!" << END_COLOR << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << GRAY_COLOR << "Aaargh..." << END_COLOR << std::endl;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const &other)
{
	if (this == &other)
		return *this;

	this->hitPoint_ = other.hitPoint_;
	this->type_ = other.type_;
	
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
