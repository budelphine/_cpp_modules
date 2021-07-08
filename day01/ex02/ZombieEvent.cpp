#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->name_ = "Default ZombieEventName";
	this->type_ = "Default ZombieEventType";
}
ZombieEvent::ZombieEvent(std::string name)
{
	this->name_ = name;
	this->type_ = "Default ZombieEventType";
}
ZombieEvent::ZombieEvent(std::string name, std::string type)
{
	this->name_ = name;
	this->type_ = type;
}

std::string		ZombieEvent::getName()
{
	return this->name_;
}
std::string		ZombieEvent::getType()
{
	return this->type_;
}

void			ZombieEvent::setName(std::string name)
{
	this->name_ = name;
}
void			ZombieEvent::setType(std::string type)
{
	this->type_ = type;
}

void			ZombieEvent::setZombieName(Zombie *zombie, std::string name)
{
	if (zombie == NULL)
	{
		std::cout << "Zombie is NULL-object" << std::endl;
		return ;
	}
	zombie->setName(name);
}
void			ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	if (zombie == NULL)
	{
		std::cout << "Zombie is NULL-object" << std::endl;
		return ;
	}
	zombie->setType(type);
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name, this->type_);
	return newZombie;
}
