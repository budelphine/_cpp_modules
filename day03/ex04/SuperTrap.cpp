#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("defaulSuperTrap", 100, 100, 120, 120, 1, 20, 20, 5), FragTrap("defaulSuperTrap"), NinjaTrap("defaulSuperTrap")
{
	std::cout << "* SUP3R-TP Default constructor called *" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 20, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "* SUP3R-TP Default named constructor called *" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy)
{
	std::cout << "* SUP3R-TP Copy constructor called *" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "* SUP3R-TP Destructor called *" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap &other) {
	std::cout << "* SUP3R-TP Assignation operator called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "You can't just program this level of excitement!" << std::endl;
	
	this->name_ = other.getName();
	this->hitPoints_ = other.getHitPoints();
	this->maxHitPoints_ = other.getMaxHitPoints();
	this->energyPoints_ = other.getEnergyPoints();
	this->level_ = other.getLevel();
	this->meleeAttackDamage_ = other.getMeleeAttackDamage();
	this->rangedAttackDamage_ = other.getRangedAttackDamage();
	this->armorDamageReduction_ = other.getArmorDamageReduction();
	return (*this);
}

unsigned int		SuperTrap::rangedAttack(std::string const& targetName)
{
	std::cout << "* SUP3R-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *range*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;

	return FragTrap::rangedAttack(targetName);
}

unsigned int		SuperTrap::meleeAttack(std::string const& targetName)
{
	std::cout << "* SUP3R-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *melee*, causing " << this->getMeleeAttackDamage() << " points of damage! *" << std::endl;

	return NinjaTrap::meleeAttack(targetName);
}

unsigned int		SuperTrap::takeDamage(unsigned int damageAmount)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return this->getHitPoints();
	}

	std::cout << "* SUP3R-TP " << RED_COLOR << this->getName() << END_COLOR;
	std::cout << " has been damaged at " << damageAmount;
	
	ClapTrap::takeDamage(damageAmount);

	std::cout << " current Hit Point: " << GRAY_BACKGROND << this->getHitPoints() << " hp" << END_COLOR << " *" << std::endl;

	if (this->hitPoints_ == 0)
	{
		std::cout << "* SUP3R-TP " << this->getName() << " died *" << std::endl;
	}

	return this->getHitPoints();
}

unsigned int		SuperTrap::beRepaired(unsigned int healAmount)
{	
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " has been healed at " << healAmount;

	ClapTrap::beRepaired(healAmount);
	std::cout << " current Hit Point: " << this->getHitPoints() << " hp *" << std::endl;

	return this->getHitPoints();
}

unsigned int		SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " use special skill vaulthunter_dot_exe" << std::endl;
	return FragTrap::vaulthunter_dot_exe(target);
}

unsigned int		SuperTrap::ninjaShoebox(NinjaTrap &enemy)
{
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " use special skill ninjaShoebox" << std::endl;
	return NinjaTrap::ninjaShoebox(enemy);
}

unsigned int		SuperTrap::ninjaShoebox(FragTrap &enemy)
{
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " use special skill ninjaShoebox" << std::endl;
	return NinjaTrap::ninjaShoebox(enemy);
}

unsigned int		SuperTrap::ninjaShoebox(ScavTrap &enemy)
{
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " use special skill ninjaShoebox" << std::endl;
	return NinjaTrap::ninjaShoebox(enemy);
}

unsigned int		SuperTrap::ninjaShoebox(ClapTrap &enemy)
{
	std::cout << "* SUP3R-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " use special skill ninjaShoebox" << std::endl;
	return NinjaTrap::ninjaShoebox(enemy);
}

