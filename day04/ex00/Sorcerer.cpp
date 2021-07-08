#include "Sorcerer.hpp"

std::string	Sorcerer::getName()const { return this->name_; }
std::string	Sorcerer::getTitle()const { return this->title_; }

Sorcerer::Sorcerer() : name_("privateName"), title_("privateTitle")
{
	std::cout << GREEN_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << this->getTitle() << ", " << END_COLOR;
	std::cout << "is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : name_(name), title_(title)
{
	std::cout << GREEN_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << this->getTitle() << ", " << END_COLOR;
	std::cout << "is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	std::cout << GREEN_COLOR << copy.getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << copy.getTitle() << ", " << END_COLOR;
	std::cout << "was copied!" << std::endl;
	
	operator=(copy);
}

Sorcerer::~Sorcerer()
{
	std::cout << GREEN_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << this->getTitle() << ", " << END_COLOR;
	std::cout << "is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer &other)
{
	if (this == &other)
		return *this;

	std::cout << GREEN_COLOR << other.getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << other.getTitle() << ", " << END_COLOR;
	std::cout << "assigned!" << std::endl;
	
	this->name_ = other.name_;
	this->title_ = other.title_;

	return (*this);
}

std::ostream& operator << (std::ostream& out, Sorcerer const& sorcerer)
{
	out << "I am ";
	out << sorcerer.getName() << ", ";
	out << sorcerer.getTitle() << ", ";
	out << "and I like ponies!" << std::endl;

	return out;
}

void	Sorcerer::introduce()const
{
	std::cout << "I am ";
	std::cout << GREEN_COLOR << this->getName() << ", " << END_COLOR;
	std::cout << GREEN_COLOR << this->getTitle() << ", " << END_COLOR;
	std::cout << "and I like ponies!" << std::endl;
}

void		Sorcerer::polymorph(Victim const &victim)const
{
	victim.getPolymorphed();
}
