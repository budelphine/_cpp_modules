#include "HungryShark.hpp"

HungryShark::HungryShark()
{
	std::cout << "Shark is coming" << std::endl;
}

HungryShark::HungryShark(HungryShark const &copy)
{
	(void)copy;
	std::cout << "Shark is coming" << std::endl;
}

HungryShark::~HungryShark( )
{
	std::cout << "It's not a shark, just a delphine" << std::endl;
}

HungryShark&	HungryShark::operator=(HungryShark const &other)
{
	(void)other;
	return *this;
}

void		HungryShark::battleCry()const
{
	std::cout << "Omnom-nom!" << std::endl;
}

void		HungryShark::rangedAttack()const
{
	std::cout << "* attacks with a Tail *" << std::endl;
}

void		HungryShark::meleeAttack()const
{
	std::cout << "* attacks with a Fangs *" << std::endl;
}

ISpaceMarine*		HungryShark::clone()const
{
	HungryShark *newHungryShark = new HungryShark(*this);
	return newHungryShark;
}
