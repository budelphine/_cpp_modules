#include <iostream>
#include "SuperTrap.hpp"

void	testSuperTrap()
{
	SuperTrap	firstSuperTrap;
	std::cout << std::endl;
	SuperTrap	secondSuperTrap("secondSuperTrap");
	std::cout << std::endl;
	SuperTrap	thirdSuperTrap;
	thirdSuperTrap  = secondSuperTrap;
	std::cout << std::endl;
	SuperTrap	fourthSuperTrap(secondSuperTrap);

	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Name of First - " << firstSuperTrap.getName() << std::endl;
	std::cout << "Name of Second - " << secondSuperTrap.getName() << std::endl;
	std::cout << "Name of Third - " << thirdSuperTrap.getName() << std::endl;
	std::cout << "Name of Fourth - " << fourthSuperTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	firstSuperTrap.setName("firstSuperTrap");
	secondSuperTrap.setName("secondSuperTrap");
	thirdSuperTrap.setName("thirdSuperTrap");
	fourthSuperTrap.setName("fourthSuperTrap");

	std::cout << "Setted Name of First - " << firstSuperTrap.getName() << std::endl;
	std::cout << "Setted Name of Second - " << secondSuperTrap.getName() << std::endl;
	std::cout << "Setted Name of Third - " << thirdSuperTrap.getName() << std::endl;
	std::cout << "Setted Name of Fourth - " << fourthSuperTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "LET'S START OUR ROBOLUTION!!!" << std::endl << std::endl;

	firstSuperTrap.takeDamage(secondSuperTrap.rangedAttack(firstSuperTrap.getName()));
	std::cout << std::endl;
	secondSuperTrap.takeDamage(thirdSuperTrap.meleeAttack(secondSuperTrap.getName()));
	std::cout << std::endl;
	thirdSuperTrap.takeDamage(fourthSuperTrap.rangedAttack(thirdSuperTrap.getName()));
	std::cout << std::endl;
	fourthSuperTrap.takeDamage(firstSuperTrap.meleeAttack(fourthSuperTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "KILL FIRST!!!" << std::endl << std::endl;

	firstSuperTrap.takeDamage(secondSuperTrap.rangedAttack(firstSuperTrap.getName()));
	std::cout << std::endl;
	firstSuperTrap.takeDamage(secondSuperTrap.meleeAttack(firstSuperTrap.getName()));
	std::cout << std::endl;
	firstSuperTrap.takeDamage(secondSuperTrap.rangedAttack(firstSuperTrap.getName()));
	std::cout << std::endl;
	firstSuperTrap.takeDamage(secondSuperTrap.meleeAttack(firstSuperTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AFTER DEAD" << std::endl << std::endl;

	firstSuperTrap.takeDamage(secondSuperTrap.meleeAttack(firstSuperTrap.getName()));
	std::cout << std::endl;
	firstSuperTrap.beRepaired(100);
	std::cout << std::endl;
	fourthSuperTrap.takeDamage(firstSuperTrap.rangedAttack(fourthSuperTrap.getName()));
	std::cout << std::endl;
	fourthSuperTrap.takeDamage(firstSuperTrap.meleeAttack(fourthSuperTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "SOMETHING SPECIAL PART ONE" << std::endl << std::endl;

	ClapTrap	clapTrap;
	FragTrap	fragTrap;
	ScavTrap	scavTrap;
	NinjaTrap	ninjaTrap;
	std::cout << std::endl;

	firstSuperTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;
	firstSuperTrap.ninjaShoebox(clapTrap);
	std::cout << std::endl;
	firstSuperTrap.ninjaShoebox(fragTrap);
	std::cout << std::endl;
	fourthSuperTrap.ninjaShoebox(scavTrap);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "SOMETHING SPECIAL PART TWO" << std::endl << std::endl;

	firstSuperTrap.vaulthunter_dot_exe(ninjaTrap.getName());
	std::cout << std::endl;
	firstSuperTrap.vaulthunter_dot_exe(clapTrap.getName());
	std::cout << std::endl;
	firstSuperTrap.vaulthunter_dot_exe(fragTrap.getName());
	std::cout << std::endl;
	fourthSuperTrap.vaulthunter_dot_exe(scavTrap.getName());
	std::cout << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "BE REPAIRD AND FIGHT AGAIN!" << std::endl << std::endl;

	secondSuperTrap.beRepaired(10);
	std::cout << std::endl;

	firstSuperTrap.beRepaired(1000);
	std::cout << std::endl;

	firstSuperTrap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
}

int main() {
	std::cout << "Welcome to ex04 - Ultimate assault shoebox" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST SUP3R-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testSuperTrap();

	return 0;
}