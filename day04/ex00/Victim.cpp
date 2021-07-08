#include "Victim.hpp"

std::string	Victim::getName()const { return this->name_; }

Victim::Victim(std::string name) : name_(name)
{
	std::cout << "Some random victim called ";
	std::cout << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	std::cout << "Some random victim called ";
	std::cout << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " just copied!" << std::endl;
	
	this->name_ = copy.name_;
}

Victim::~Victim()
{
	std::cout << "Victim ";
	std::cout << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " just died for no apparent reason!" << std::endl;
}

Victim&	Victim::operator=(const Victim &other)
{
	if (this == &other)
		return *this;

	std::cout << "Some random victim called ";
	std::cout << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " just assigned!" << std::endl;

	this->name_ = other.name_;
	return (*this);
}

std::ostream& operator << (std::ostream& out, Victim const& Victim)
{
	out << "I am ";
	out << Victim.getName();
	out << " and I like otters!" << std::endl;

	return out;
}

void	Victim::introduce()const
{
	std::cout << "I am ";
	std::cout << BLUE_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << " and I like otters!" << std::endl;

}

void	Victim::getPolymorphed()const
{
	std::cout << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " has been turned into a cute little sheep!" << std::endl;
}
