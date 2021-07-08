#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "HungryShark.hpp"
#include "Squad.hpp"

int main()
{
	std::cout << "Welcome to ex02 - This code is unclean. PURIFY IT!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISpaceMarine* babyShark = new HungryShark;

	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// vlc->push(babyShark);

	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
	ISquad  *vlc3 = new Squad;

    vlc->push(bob);
    vlc->push(jim);
    *static_cast<Squad *>(vlc3) = *static_cast<Squad *>(vlc);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	for (int i = 0; i < vlc3->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	std::cout << std::endl << "* Afterlife *" << std::endl;
	delete vlc;

	return 0;
}