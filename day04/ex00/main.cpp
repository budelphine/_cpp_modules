#include "Sorcerer.hpp"
#include "Hedgehog.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	std::cout << "Welcome to ex00 - Polymorphism, or When the sorcerer thinks you’d be cuter as a sheep" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	Sorcerer robert("Robert", "the Magnificent");
	std::cout << std::endl;

	Victim jim("Victim Jimmy");
	std::cout << std::endl;

	Peon joe("Peon Joe");
	std::cout << std::endl;

	Hedgehog jack("Hedgehog Jack");
	std::cout << std::endl;

	std::cout << robert << jim << joe << jack;
	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jack);
	std::cout << std::endl;

	std::cout << "* Afterlife *" << std::endl;
	std::cout << std::endl;
	return 0;
}
