#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "Welcome to ex06 - Unnecessary violence" << std::endl << std::endl;

	{
		Weapon club = Weapon("crude _SpikedClub_");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	std::cout << std::endl;

	{
		Weapon club = Weapon("crude _SpikedClub_");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}