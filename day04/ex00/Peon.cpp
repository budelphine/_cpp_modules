#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) 
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy) { }

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator=(const Peon &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	return (*this);
}

std::ostream& operator << (std::ostream& out, Peon const& Peon)
{
	out << "I am ";
	out << Peon.getName();
	out << " and I also like otters!" << std::endl;

	return out;
}

void	Peon::introduce()const
{
	std::cout << "I am ";
	std::cout << VIOLET_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << " and I also like otters!" << std::endl;
}

void	Peon::getPolymorphed()const
{
	std::cout << VIOLET_COLOR << this->getName() << END_COLOR;
	std::cout << " has been turned into a pink pony!" << std::endl;
}
