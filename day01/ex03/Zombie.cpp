#include "Zombie.hpp"

std::string randomNames[7] = {
	"Memilio",
	"Sjakku",
	"Atomatoe",
	"Asumerag",
	"Hgrampa",
	"Mdenys",
	"Budelphi"
};

std::string randomTypes[7] = {
	"Pride",
	"Envy",
	"Wrath",
	"Sloth",
	"Avarice",
	"Gluttony",
	"Lust"
};

Zombie::Zombie()
{
	this->name_ = randomNames[std::rand() % 7];
	this->type_ = randomTypes[std::rand() % 7];
}

Zombie::Zombie(std::string name)
{
	this->name_ = name;
	this->type_ = randomTypes[std::rand() % 7];
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name_ = name;
	this->type_ = type;
}

std::string		Zombie::getName()
{
	return this->name_;
}
std::string		Zombie::getType()
{
	return this->type_;
}

void			Zombie::setName(std::string name)
{
	this->name_ = name;
}
void			Zombie::setType(std::string type)
{
	this->type_ = type;
}

void			Zombie::announce()
{
	std::string	phrase;

	phrase = "Braiiiiiiinnnssss...";
	std::cout << this->getType() << " " << this->getName() << ": " << phrase << std::endl;
}
