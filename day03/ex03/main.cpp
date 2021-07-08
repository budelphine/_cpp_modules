#include <iostream>

#include "NinjaTrap.hpp"

void	testNinjaTrap()
{
	NinjaTrap	firstNinjaTrap;
	std::cout << std::endl;
	NinjaTrap	secondNinjaTrap("secondNinjaTrap");
	std::cout << std::endl;
	NinjaTrap	thirdNinjaTrap;
	thirdNinjaTrap  = secondNinjaTrap;
	std::cout << std::endl;
	NinjaTrap	fourthNinjaTrap(secondNinjaTrap);

	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Name of First - " << firstNinjaTrap.getName() << std::endl;
	std::cout << "Name of Second - " << secondNinjaTrap.getName() << std::endl;
	std::cout << "Name of Third - " << thirdNinjaTrap.getName() << std::endl;
	std::cout << "Name of Fourth - " << fourthNinjaTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	firstNinjaTrap.setName("firstNinjaTrap");
	secondNinjaTrap.setName("secondNinjaTrap");
	thirdNinjaTrap.setName("thirdNinjaTrap");
	fourthNinjaTrap.setName("fourthNinjaTrap");

	std::cout << "Setted Name of First - " << firstNinjaTrap.getName() << std::endl;
	std::cout << "Setted Name of Second - " << secondNinjaTrap.getName() << std::endl;
	std::cout << "Setted Name of Third - " << thirdNinjaTrap.getName() << std::endl;
	std::cout << "Setted Name of Fourth - " << fourthNinjaTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "LET'S START OUR ROBOLUTION!!!" << std::endl << std::endl;

	firstNinjaTrap.takeDamage(secondNinjaTrap.rangedAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;
	secondNinjaTrap.takeDamage(thirdNinjaTrap.meleeAttack(secondNinjaTrap.getName()));
	std::cout << std::endl;
	thirdNinjaTrap.takeDamage(fourthNinjaTrap.rangedAttack(thirdNinjaTrap.getName()));
	std::cout << std::endl;
	fourthNinjaTrap.takeDamage(firstNinjaTrap.meleeAttack(fourthNinjaTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "KILL FIRST!!!" << std::endl << std::endl;

	firstNinjaTrap.takeDamage(secondNinjaTrap.rangedAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;
	firstNinjaTrap.takeDamage(secondNinjaTrap.meleeAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;
	firstNinjaTrap.takeDamage(secondNinjaTrap.rangedAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;
	firstNinjaTrap.takeDamage(secondNinjaTrap.meleeAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AFTER DEAD" << std::endl << std::endl;

	firstNinjaTrap.takeDamage(secondNinjaTrap.meleeAttack(firstNinjaTrap.getName()));
	std::cout << std::endl;
	firstNinjaTrap.beRepaired(100);
	std::cout << std::endl;
	fourthNinjaTrap.takeDamage(firstNinjaTrap.rangedAttack(fourthNinjaTrap.getName()));
	std::cout << std::endl;
	fourthNinjaTrap.takeDamage(firstNinjaTrap.meleeAttack(fourthNinjaTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "SOMETHING SPECIAL" << std::endl << std::endl;

	ClapTrap	clapTrap;
	FragTrap	fragTrap;
	ScavTrap	scavTrap;
	std::cout << std::endl;

	firstNinjaTrap.ninjaShoebox(thirdNinjaTrap);
	std::cout << std::endl;
	firstNinjaTrap.ninjaShoebox(clapTrap);
	std::cout << std::endl;
	firstNinjaTrap.ninjaShoebox(fragTrap);
	std::cout << std::endl;
	fourthNinjaTrap.ninjaShoebox(scavTrap);
	std::cout << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "BE REPAIRD AND FIGHT AGAIN!" << std::endl << std::endl;

	secondNinjaTrap.beRepaired(10);
	std::cout << std::endl;

	firstNinjaTrap.beRepaired(1000);
	std::cout << std::endl;

	firstNinjaTrap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
}

int main() {
	std::cout << "Welcome to ex03 - Now it’s easier!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST NINJ4-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testNinjaTrap();

	return 0;
}