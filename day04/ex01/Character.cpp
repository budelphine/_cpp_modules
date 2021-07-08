#include "Character.hpp"

std::string Character::getName()const { return this->name_; };
int			Character::getHitPoint()const { return this->hitPoint_; };
int			Character::getAPStorage()const { return this->APStorage_; };
int			Character::getMaxAPStorage()const { return this->maxAPStorage_; };
AWeapon*	Character::getWeapon()const { return this->weapon_; };

Character::Character() : name_("Character"), hitPoint_(100), APStorage_(40), maxAPStorage_(40), weapon_(NULL) 
{
}

Character::Character(std::string const& name) : name_(name), hitPoint_(100), APStorage_(40), maxAPStorage_(40), weapon_(NULL) 
{
}

Character::Character(Character const &copy)
{
	this->name_ = copy.name_;
	this->hitPoint_ = copy.hitPoint_;
	this->APStorage_ = copy.APStorage_;
	this->maxAPStorage_ = copy.maxAPStorage_;
	this->weapon_ = copy.weapon_;
}

Character::~Character()
{
	std::cout << "* A Сharacter losts in Wasteland *" << std::endl;
}

Character&	Character::operator=(Character const &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	this->hitPoint_ = other.hitPoint_;
	this->APStorage_ = other.APStorage_;
	this->maxAPStorage_ = other.maxAPStorage_;
	this->weapon_ = other.weapon_;
	return (*this);
}

void		Character::recoverAP()
{
	this->APStorage_ = this->APStorage_ + 10 < 40 ? this->APStorage_ + 10 : 40;
}

void		Character::equip(AWeapon* weapon)
{
	this->weapon_ = weapon;
}

void		Character::attack(Enemy* enemy)
{
	if (!this->weapon_ || !enemy || this->APStorage_ < this->weapon_->getAPCost() || enemy->getHitPoint() <= 0)
	{
		std::cout << this->getName() << " can't attack enemy for some reason";
		return ;
	}

	std::cout << this->getName() << " attacks ";
	std::cout << RED_COLOR << enemy->getType() << END_COLOR;
	std::cout << " with a " << GREEN_COLOR << this->weapon_->getName() << END_COLOR << std::endl;

	this->APStorage_ -= this->weapon_->getAPCost();
	this->weapon_->attack();
	enemy->takeDamage(this->weapon_->getDamage());

	if (enemy->getHitPoint() <= 0)
		delete enemy;
}

std::ostream    &operator<<(std::ostream &out, Character &character)
{
	out <<  character.getName() << " has " << character.getAPStorage() << " AP and";
	if (character.getWeapon())
		out << " wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << " is unarmed" << std::endl;
	return (out);
}
