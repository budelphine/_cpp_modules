#include "Pony.hpp"

Pony::Pony(void) { return ; }

Pony::Pony(std::string name)
{
	this->name_ = name;
}

std::string		Pony::getName()
{
	return this->name_;
}
std::string		Pony::getColor()
{
	return this->color_;
}
int				Pony::getAge()
{
	return this->age_;
}

void			Pony::setName(std::string name)
{
	this->name_ = name;
}
void			Pony::setAge(int age)
{
	this->age_ = age;
}
void			Pony::setColor(std::string color)
{
	this->color_ = color;
}

void			Pony::printInfo()
{
	std::cout << "name:  " << this->getName() << std::endl;
	std::cout << "color: " << this->getColor() << std::endl;
	std::cout << "age:   " << this->getAge() << std::endl;
}
void			Pony::voiceIntroduce()
{
	std::cout << "Hello! I'm " << this->getName() << std::endl;
}
