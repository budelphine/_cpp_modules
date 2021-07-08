#include "Zombie.hpp"

Zombie::Zombie() : Enemy(15, "Zombie")
{
	std::cout << RED_COLOR << "* Mmmmm... Brains... *" << END_COLOR << std::endl;
}

Zombie::Zombie(int hitPoint, std::string const& type) : Enemy(hitPoint, type)
{
	std::cout << RED_COLOR << "* Mmmmm... Brains... *" << END_COLOR << std::endl;
}

Zombie::Zombie(Zombie const &copy) : Enemy (copy)
{
	std::cout << RED_COLOR << "* Mmmmm... Brains... *" << END_COLOR << std::endl;
}

Zombie::~Zombie()
{
	std::cout << GRAY_COLOR << "* Mmmoar brains... *" << END_COLOR << std::endl;
}

Zombie&	Zombie::operator=(Zombie const &other)
{
	if (this == &other)
		return *this;
		
	this->hitPoint_ = other.hitPoint_;
	this->type_ = other.type_;
	return (*this);
}

void			Zombie::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
