#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << RED_COLOR << "* click click click *" << END_COLOR << std::endl;
}

RadScorpion::RadScorpion(int hitPoint, std::string const& type) : Enemy(hitPoint, type)
{
	std::cout << RED_COLOR << "* click click click *" << END_COLOR << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy (copy)
{
	std::cout << RED_COLOR << "* click click click *" << END_COLOR << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << GRAY_COLOR << "* SPROTCH *" << END_COLOR << std::endl;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const &other)
{
	if (this == &other)
		return *this;
		
	this->hitPoint_ = other.hitPoint_;
	this->type_ = other.type_;
	return (*this);
}

void			RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
