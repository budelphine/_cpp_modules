#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

void	testScavTrap()
{
	ScavTrap	firstScavTrap;
	std::cout << std::endl;
	ScavTrap	secondScavTrap("secondScavTrap");
	std::cout << std::endl;
	ScavTrap	thirdScavTrap;
	thirdScavTrap  = secondScavTrap;
	std::cout << std::endl;
	ScavTrap	fourthScavTrap(secondScavTrap);

	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Name of First - " << firstScavTrap.getName() << std::endl;
	std::cout << "Name of Second - " << secondScavTrap.getName() << std::endl;
	std::cout << "Name of Third - " << thirdScavTrap.getName() << std::endl;
	std::cout << "Name of Fourth - " << fourthScavTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	firstScavTrap.setName("firstScavTrap");
	secondScavTrap.setName("secondScavTrap");
	thirdScavTrap.setName("thirdScavTrap");
	fourthScavTrap.setName("fourthScavTrap");

	std::cout << "Setted Name of First - " << firstScavTrap.getName() << std::endl;
	std::cout << "Setted Name of Second - " << secondScavTrap.getName() << std::endl;
	std::cout << "Setted Name of Third - " << thirdScavTrap.getName() << std::endl;
	std::cout << "Setted Name of Fourth - " << fourthScavTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "LET'S START OUR ROBOLUTION!!!" << std::endl << std::endl;

	firstScavTrap.takeDamage(secondScavTrap.rangedAttack(firstScavTrap.getName()));
	std::cout << std::endl;
	secondScavTrap.takeDamage(thirdScavTrap.meleeAttack(secondScavTrap.getName()));
	std::cout << std::endl;
	thirdScavTrap.takeDamage(fourthScavTrap.rangedAttack(thirdScavTrap.getName()));
	std::cout << std::endl;
	fourthScavTrap.takeDamage(firstScavTrap.meleeAttack(fourthScavTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "KILL FIRST!!!" << std::endl << std::endl;

	firstScavTrap.takeDamage(secondScavTrap.rangedAttack(firstScavTrap.getName()));
	std::cout << std::endl;
	firstScavTrap.takeDamage(secondScavTrap.meleeAttack(firstScavTrap.getName()));
	std::cout << std::endl;
	firstScavTrap.takeDamage(secondScavTrap.rangedAttack(firstScavTrap.getName()));
	std::cout << std::endl;
	firstScavTrap.takeDamage(secondScavTrap.meleeAttack(firstScavTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AFTER DEAD" << std::endl << std::endl;

	firstScavTrap.takeDamage(secondScavTrap.meleeAttack(firstScavTrap.getName()));
	std::cout << std::endl;
	firstScavTrap.beRepaired(100);
	std::cout << std::endl;
	fourthScavTrap.takeDamage(firstScavTrap.rangedAttack(fourthScavTrap.getName()));
	std::cout << std::endl;
	fourthScavTrap.takeDamage(firstScavTrap.meleeAttack(fourthScavTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "SPECIAL vaulhunter_dot_exe ATTACK" << std::endl << std::endl;
	
	firstScavTrap.challengeNewcomer(secondScavTrap.getName());
	std::cout << std::endl;

	secondScavTrap.challengeNewcomer(thirdScavTrap.getName());
	std::cout << std::endl;

	thirdScavTrap.challengeNewcomer(fourthScavTrap.getName());
	std::cout << std::endl;

	fourthScavTrap.challengeNewcomer(firstScavTrap.getName());
	std::cout << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "BE REPAIRD AND FIGHT AGAIN!" << std::endl << std::endl;

	secondScavTrap.beRepaired(10);
	std::cout << std::endl;

	secondScavTrap.beRepaired(1000);
	std::cout << std::endl;

	firstScavTrap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
}

int main() {
	std::cout << "Welcome to ex01 - Serena, my love!" << std::endl ;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST FR4G-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testFragTrap();

	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST SC4V-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testScavTrap();
	return 0;
}