#include "Hedgehog.hpp"

Hedgehog::Hedgehog(std::string name) : Victim(name) 
{
	std::cout << "* Sniff sniff *" << std::endl;
}

Hedgehog::Hedgehog(const Hedgehog &copy) : Victim(copy) { }

Hedgehog::~Hedgehog()
{
	std::cout << "Hedgehog in the fog..." << std::endl;
}

Hedgehog&	Hedgehog::operator=(const Hedgehog &other)
{
	if (this == &other)
		return *this;

	this->name_ = other.name_;
	return (*this);
}

std::ostream& operator << (std::ostream& out, Hedgehog const& Hedgehog)
{
	out << "I am ";
	out << Hedgehog.getName();
	out << " and I don't like apple!" << std::endl;

	return out;
}

void	Hedgehog::introduce()const
{
	std::cout << "I am ";
	std::cout << VIOLET_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << " and I don't like apple!" << std::endl;
}

void	Hedgehog::getPolymorphed()const
{
	std::cout << VIOLET_COLOR << this->getName() << END_COLOR;
	std::cout << " has been turned into a rainbow!" << std::endl;
}
