#include "Character.hpp"

int main()
{
	std::cout << "Welcome to ex01 - I don’t want to set the world on fire" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	Character* myCharacter = new Character("Me Character");
	std::cout << *myCharacter << std::endl;

	std::cout << "* Rad Scorpion born *" << std::endl;
	Enemy* firstRadScorpion = new RadScorpion();
	std::cout << std::endl;

	AWeapon* firstPlasmaRifle = new PlasmaRifle();
	AWeapon* firstPowerFist = new PowerFist();

	myCharacter->equip(firstPlasmaRifle);
	std::cout << *myCharacter << std::endl;

	myCharacter->equip(firstPowerFist);
	myCharacter->attack(firstRadScorpion);
	std::cout << *myCharacter << std::endl;

	myCharacter->equip(firstPlasmaRifle);
	std::cout << *myCharacter << std::endl;

	myCharacter->attack(firstRadScorpion);
	std::cout << *myCharacter << std::endl;

	myCharacter->attack(firstRadScorpion);
	std::cout << *myCharacter << std::endl;

	std::cout << "* Super Mutant born *" << std::endl;
	Enemy* superMutant = new SuperMutant();
	std::cout << std::endl;

	myCharacter->attack(superMutant);
	std::cout << *myCharacter << std::endl;
	myCharacter->recoverAP();

	std::cout << "* Zombie born *" << std::endl;
	Enemy* zombie = new Zombie();
	std::cout << std::endl;

	myCharacter->attack(zombie);
	std::cout << *myCharacter << std::endl;
	myCharacter->recoverAP();

	std::cout << "* Afterlife *" << std::endl;
	delete myCharacter;
	delete firstPlasmaRifle;
	delete firstPowerFist;
	delete superMutant;

	return 0;
}
