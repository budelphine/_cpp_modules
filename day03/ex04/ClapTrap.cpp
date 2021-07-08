# include "ClapTrap.hpp"

void				ClapTrap::setName(std::string name) { this->name_ = name; }
std::string			ClapTrap::getName()const { return this->name_; }
int					ClapTrap::getHitPoints()const { return this->hitPoints_; }
int					ClapTrap::getMaxHitPoints()const { return this->maxHitPoints_; }
int					ClapTrap::getEnergyPoints()const { return this->energyPoints_; }
int					ClapTrap::getMaxEnergyPoints()const { return this->maxEnergyPoints_; }
int					ClapTrap::getLevel()const { return this->level_; }
int					ClapTrap::getMeleeAttackDamage()const { return this->meleeAttackDamage_; }
int					ClapTrap::getRangedAttackDamage()const { return this->rangedAttackDamage_; }
int					ClapTrap::getArmorDamageReduction()const { return this->armorDamageReduction_; }

const std::string ClapTrap::trapDeadMumbling_[5] = {
		"` Bip bop! `",
		"` Shhhhhh `",
		"` Piip pooop `",
		"` Rattle `",
		"` Shwing! `"
	};

ClapTrap::ClapTrap() : name_("defaultClapTrap")
{
	std::cout << "* CL4P-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << END_COLOR << " - created" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
}

ClapTrap::ClapTrap(std::string name) : name_(name)
{
	std::cout << "* CL4P-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << END_COLOR << " - created" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction)
{
	std::cout << "* CL4P-TP Default named constructor called *" << std::endl;
	this->name_ = name;
	std::cout << GREEN_COLOR << this->getName() << END_COLOR << " - created" << std::endl;

	this->name_ = name;
	this->hitPoints_ = hitPoints;
	this->maxHitPoints_ = maxHitPoints;
	this->energyPoints_ = energyPoints;
	this->maxEnergyPoints_ = maxEnergyPoints;
	this->level_ = level;
	this->meleeAttackDamage_ = meleeAttackDamage;
	this->rangedAttackDamage_ = rangedAttackDamage;
	this->armorDamageReduction_ = armorDamageReduction;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "* CL4P-TP Copy constructor called *" << std::endl;
	this->name_ = copy.getName();
	std::cout << GREEN_COLOR << this->getName() << " - created" << END_COLOR << std::endl;
	
	this->hitPoints_ = copy.getHitPoints();
	this->maxHitPoints_ = copy.getMaxHitPoints();
	this->energyPoints_ = copy.getEnergyPoints();
	this->maxEnergyPoints_ = copy.getMaxEnergyPoints();
	this->level_ = copy.getLevel();
	this->meleeAttackDamage_ = copy.getMeleeAttackDamage();
	this->rangedAttackDamage_ = copy.getRangedAttackDamage();
	this->armorDamageReduction_ = copy.getArmorDamageReduction();
}

ClapTrap::~ClapTrap()
{
	std::cout << "* CL4P-TP Destructor called *" << std::endl;
	std::cout << BLUE_COLOR << this->getName() << END_COLOR << " - is dead!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "* CL4P-TP Assignation operator called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << " - assignation" << END_COLOR;
	
	this->name_ = other.getName();
	this->hitPoints_ = other.getHitPoints();
	this->maxHitPoints_ = other.getMaxHitPoints();
	this->energyPoints_ = other.getEnergyPoints();
	this->maxEnergyPoints_ = other.getMaxEnergyPoints();
	this->level_ = other.getLevel();
	this->meleeAttackDamage_ = other.getMeleeAttackDamage();
	this->rangedAttackDamage_ = other.getRangedAttackDamage();
	this->armorDamageReduction_ = other.getArmorDamageReduction();
	return (*this);
}

unsigned int		ClapTrap::rangedAttack(std::string const& targetName)
{
	(void)targetName;
	if (this->getHitPoints() == 0) { return 0; }
	return this->getRangedAttackDamage();
}

unsigned int		ClapTrap::meleeAttack(std::string const& targetName)
{	
	(void)targetName;
	if (this->getHitPoints() == 0) { return 0; }
	return this->getMeleeAttackDamage();
}

unsigned int		ClapTrap::takeDamage(unsigned int damageAmount)
{
	if (this->getHitPoints() == 0) { return 0; }
	
	while (damageAmount && this->armorDamageReduction_)
	{
		damageAmount--;
		this->armorDamageReduction_--;
	}

	while (damageAmount && this->hitPoints_)
	{
		damageAmount--;
		this->hitPoints_--;
	}

	return this->getHitPoints();
}

unsigned int		ClapTrap::beRepaired(unsigned int healAmount)
{
	this->hitPoints_ = this->hitPoints_ + healAmount > (unsigned int)this->maxHitPoints_ ? this->maxHitPoints_ : this->hitPoints_ + healAmount;
	return this->getHitPoints();
}
