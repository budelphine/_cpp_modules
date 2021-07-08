#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
	
	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(secondFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(secondFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(secondFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(secondFragTrap.getName()));
	std::cout << std::endl;

	secondFragTrap.takeDamage(thirdFragTrap.vaulthunter_dot_exe(secondFragTrap.getName()));
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
	std::cout << "SPECIAL challengeNewcomer ATTACK" << std::endl << std::endl;
	
	fourthScavTrap.challengeNewcomer(secondScavTrap.getName());
	std::cout << std::endl;

	fourthScavTrap.challengeNewcomer(secondScavTrap.getName());
	std::cout << std::endl;
	
	fourthScavTrap.challengeNewcomer(secondScavTrap.getName());
	std::cout << std::endl;

	firstScavTrap.challengeNewcomer(secondScavTrap.getName());
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

void	testClapTrap()
{
	ClapTrap	firstClapTrap;
	std::cout << std::endl;
	ClapTrap	secondClapTrap("secondClapTrap");
	std::cout << std::endl;
	ClapTrap	thirdClapTrap;
	thirdClapTrap  = secondClapTrap;
	std::cout << std::endl;
	ClapTrap	fourthClapTrap(secondClapTrap);

	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Name of First - " << firstClapTrap.getName() << std::endl;
	std::cout << "Name of Second - " << secondClapTrap.getName() << std::endl;
	std::cout << "Name of Third - " << thirdClapTrap.getName() << std::endl;
	std::cout << "Name of Fourth - " << fourthClapTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	firstClapTrap.setName("firstClapTrap");
	secondClapTrap.setName("secondClapTrap");
	thirdClapTrap.setName("thirdClapTrap");
	fourthClapTrap.setName("fourthClapTrap");

	std::cout << "Setted Name of First - " << firstClapTrap.getName() << std::endl;
	std::cout << "Setted Name of Second - " << secondClapTrap.getName() << std::endl;
	std::cout << "Setted Name of Third - " << thirdClapTrap.getName() << std::endl;
	std::cout << "Setted Name of Fourth - " << fourthClapTrap.getName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "LET'S START OUR ROBOLUTION!!!" << std::endl << std::endl;

	firstClapTrap.takeDamage(secondClapTrap.rangedAttack(firstClapTrap.getName()));
	std::cout << std::endl;
	secondClapTrap.takeDamage(thirdClapTrap.meleeAttack(secondClapTrap.getName()));
	std::cout << std::endl;
	thirdClapTrap.takeDamage(fourthClapTrap.rangedAttack(thirdClapTrap.getName()));
	std::cout << std::endl;
	fourthClapTrap.takeDamage(firstClapTrap.meleeAttack(fourthClapTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "KILL FIRST!!!" << std::endl << std::endl;

	firstClapTrap.takeDamage(secondClapTrap.rangedAttack(firstClapTrap.getName()));
	std::cout << std::endl;
	firstClapTrap.takeDamage(secondClapTrap.meleeAttack(firstClapTrap.getName()));
	std::cout << std::endl;
	firstClapTrap.takeDamage(secondClapTrap.rangedAttack(firstClapTrap.getName()));
	std::cout << std::endl;
	firstClapTrap.takeDamage(secondClapTrap.meleeAttack(firstClapTrap.getName()));
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AFTER DEAD" << std::endl << std::endl;

	firstClapTrap.takeDamage(secondClapTrap.meleeAttack(firstClapTrap.getName()));
	std::cout << std::endl;
	firstClapTrap.beRepaired(100);
	std::cout << std::endl;
	fourthClapTrap.takeDamage(firstClapTrap.rangedAttack(fourthClapTrap.getName()));
	std::cout << std::endl;
	fourthClapTrap.takeDamage(firstClapTrap.meleeAttack(fourthClapTrap.getName()));
	std::cout << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "BE REPAIRD AND FIGHT AGAIN!" << std::endl << std::endl;

	secondClapTrap.beRepaired(10);
	std::cout << std::endl;

	secondClapTrap.beRepaired(1000);
	std::cout << std::endl;

	firstClapTrap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
}

int main() {
	std::cout << "Welcome to ex02 - Repetitive work" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout  << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "TEST CL4P-TP" << std::endl;
	std::cout << "---------------------------------------------" << std::endl << std::endl;
	testClapTrap();

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