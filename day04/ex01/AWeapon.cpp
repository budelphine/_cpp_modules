#include "AWeapon.hpp"

std::string AWeapon::getName()const { return this->name_; };
std::string AWeapon::getSounds()const { return this->sounds_; };
int 		AWeapon::getAPCost()const { return this->APCost_; };
int 		AWeapon::getDamage()const { return this->damage_; };

AWeapon::AWeapon(std::string const& name, int damage, int APCost) : name_(name), damage_(damage), APCost_(APCost), sounds_("* Fiuuuu~ *")
{
}

AWeapon::AWeapon(std::string const& name, int damage, int APCost, std::string sounds) : name_(name), damage_(damage), APCost_(APCost), sounds_(sounds)
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	this->name_ = copy.name_;
	this->damage_ = copy.damage_;
	this->APCost_ = copy.APCost_;
	this->sounds_ = copy.sounds_;
}

AWeapon::~AWeapon()
{
	std::cout << "* delete AWeapon *" << std::endl;
}

AWeapon&	AWeapon::operator=(AWeapon const &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	this->damage_ = other.damage_;
	this->APCost_ = other.APCost_;
	this->sounds_ = other.sounds_;

	return (*this);
}
