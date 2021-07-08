#include "Enemy.hpp"

std::string Enemy::getType()const { return this->type_; };
int			Enemy::getHitPoint()const { return this->hitPoint_; };

Enemy::Enemy() : hitPoint_(100), type_("Some Enemy")
{
}

Enemy::Enemy(int hitPoint, std::string const& type) : hitPoint_(hitPoint), type_(type)
{
}

Enemy::Enemy(Enemy const &copy)
{
	this->type_ = copy.type_;
	this->hitPoint_ = copy.hitPoint_;
}

Enemy::~Enemy()
{
}

Enemy&	Enemy::operator=(Enemy const &other)
{
	if (this == &other)
		return *this;
	
	this->type_ = other.type_;
	this->hitPoint_ = other.hitPoint_;
	return (*this);
}

void	Enemy::takeDamage(int damage)
{
	this->hitPoint_ = hitPoint_ - damage > 0 ? hitPoint_ - damage : 0;
}
