#include <iostream>
#include "FragTrap.hpp"

void	testFragTrap()
{
	FragTrap	firstFragTrap;
	std::cout << std::endl;
	FragTrap	secondFragTrap("secondFragTrap");
	std::cout << std::endl;
	FragTrap	thirdFragTrap;
	thirdFragTrap  = secondFragTrap;
	std::cout << std::endl;
	FragTrap	fourthFragTrap(secondFragTrap);

	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Name of First - " << firstFragTrap.getName() << std::endl;
	std::cout << "Name of Second - " << secondFragTrap.getName() << std::endl;
	std::cout << "Name of Third - " << thirdFragTrap.getName() << std::endl;
	std::cout << "Name of Fourth - " << fourthFragTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	firstFragTrap.setName("firstFragTrap");
	secondFragTrap.setName("secondFragTrap");
	thirdFragTrap.setName("thirdFragTrap");
	fourthFragTrap.setName("fourthFragTrap");

	std::cout << "Setted Name of First - " << firstFragTrap.getName() << std::endl;
	std::cout << "Setted Name of Second - " << secondFragTrap.getName() << std::endl;
	std::cout << "Setted Name of Third - " << thirdFragTrap.getName() << std::endl;
	std::cout << "Setted Name of Fourth - " << fourthFragTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "LET'S START OUR ROBOLUTION!!!" << std::endl << std::endl;

	firstFragTrap.takeDamage(secondFragTrap.rangedAttack(firstFragTrap.getName()));
	std::cout << std::endl;
	secondFragTrap.takeDamage(thirdFragTrap.meleeAttack(secondFragTrap.getName()));
	std::cout << std::endl;
	thirdFragTrap.takeDamage(fourthFragTrap.rangedAttack(thirdFragTrap.getName()));
	std::cout << std::endl;
	fourthFragTrap.takeDamage(firstFragTrap.meleeAttack(fourthFragTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "KILL FIRST!!!" << std::endl << std::endl;

	firstFragTrap.takeDamage(secondFragTrap.rangedAttack(firstFragTrap.getName()));
	std::cout << std::endl;
	firstFragTrap.takeDamage(secondFragTrap.meleeAttack(firstFragTrap.getName()));
	std::cout << std::endl;
	firstFragTrap.takeDamage(secondFragTrap.rangedAttack(firstFragTrap.getName()));
	std::cout << std::endl;
	firstFragTrap.takeDamage(secondFragTrap.meleeAttack(firstFragTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AFTER DEAD" << std::endl << std::endl;

	firstFragTrap.takeDamage(secondFragTrap.meleeAttack(firstFragTrap.getName()));
	std::cout << std::endl;
	firstFragTrap.beRepaired(100);
	std::cout << std::endl;
	fourthFragTrap.takeDamage(firstFragTrap.rangedAttack(fourthFragTrap.getName()));
	std::cout << std::endl;
	fourthFragTrap.takeDamage(firstFragTrap.meleeAttack(fourthFragTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "SPECIAL vaulhunter_dot_exe ATTACK" << std::endl << std::endl;
	
	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(thirdFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(thirdFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(thirdFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(thirdFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(thirdFragTrap.getName()));
	std::cout << std::endl;

	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "BE REPAIRD AND FIGHT AGAIN!" << std::endl << std::endl;

	secondFragTrap.beRepaired(10);
	std::cout << std::endl;

	secondFragTrap.beRepaired(1000);
	std::cout << std::endl;

	firstFragTrap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
}

int main() {
	std::cout << "Welcome to ex00 - Aaaaand... OPEN!" << std::endl ;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST FR4G-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testFragTrap();
	
	return 0;
}