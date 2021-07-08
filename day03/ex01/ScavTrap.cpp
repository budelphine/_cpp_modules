#include "ScavTrap.hpp"

void				ScavTrap::setName(std::string name) { this->name_ = name; }
std::string			ScavTrap::getName()const { return this->name_; }
int					ScavTrap::getHitPoints()const { return this->hitPoints_; }
int					ScavTrap::getMaxHitPoints()const { return this->maxHitPoints_; }
int					ScavTrap::getEnergyPoints()const { return this->energyPoints_; }
int					ScavTrap::getMaxEnergyPoints()const { return this->maxEnergyPoints_; }
int					ScavTrap::getLevel()const { return this->level_; }
int					ScavTrap::getMeleeAttackDamage()const { return this->meleeAttackDamage_; }
int					ScavTrap::getRangedAttackDamage()const { return this->rangedAttackDamage_; }
int					ScavTrap::getArmorDamageReduction()const { return this->armorDamageReduction_; }

std::string scavDeadMumbling[5] = {
		"` Bip bop! `",
		"` Shhhhhh `",
		"` Piip pooop `",
		"` Rattle `",
		"` Shwing! `"
	};

ScavTrap::ScavTrap() : name_("defaultScavTrap")
{
	std::cout << "* ScavTrap Default constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "ScavTrap on the field!" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 50;
	this->maxEnergyPoints_ = 50;
	this->level_ = 1;
	this->meleeAttackDamage_ = 20;
	this->rangedAttackDamage_ = 15;
	this->armorDamageReduction_ = 3;
}

ScavTrap::ScavTrap(std::string name) : name_(name)
{
	std::cout << "* ScavTrap Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "The robot is dead, long live the robot!" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 50;
	this->maxEnergyPoints_ = 50;
	this->level_ = 1;
	this->meleeAttackDamage_ = 20;
	this->rangedAttackDamage_ = 15;
	this->armorDamageReduction_ = 3;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "* ScavTrap Copy constructor called *" << std::endl;
	
	this->name_ = copy.getName();
	this->hitPoints_ = copy.getHitPoints();
	this->maxHitPoints_ = copy.getMaxHitPoints();
	this->energyPoints_ = copy.getEnergyPoints();
	this->level_ = copy.getLevel();
	this->meleeAttackDamage_ = copy.getMeleeAttackDamage();
	this->rangedAttackDamage_ = copy.getRangedAttackDamage();
	this->armorDamageReduction_ = copy.getArmorDamageReduction();

	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "ScavTrap is here!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "* ScavTrap Destructor called *" << std::endl;
	std::cout << BLUE_COLOR << this->getName() << END_COLOR << ": ";
	std::cout << "For you...I commit...seddoku..." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "* ScavTrap Assignation operator called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "I'm made of magic!" << std::endl;
	
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

unsigned int		ScavTrap::rangedAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[6] = {
		"Laaasers!",
		"Kill, reload! Kill, reload! KILL! RELOAD!",
		"Like those guys who made only one song ever.",
		"All these bullets in just one shot.",
		"One shot, make it count!",
		"A whole lotta bullets in just one trigger pull!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << scavDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* ScavTrap " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *range*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;

	std::cout << randomAttackPhrase[std::rand() % 6] << std::endl;
	return this->getRangedAttackDamage();
}

unsigned int		ScavTrap::meleeAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[5] = {
		"Boogie time!",
		"Psychedelic, man!",
		"Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
		"I have two robot arms!",
		"Punch 'em in the face, ScavTrap!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << scavDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* ScavTrap " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *melee*, causing " << this->getMeleeAttackDamage() << " points of damage! *" << std::endl;
	
	std::cout << randomAttackPhrase[std::rand() % 5] << std::endl;
	return this->getMeleeAttackDamage();
}

unsigned int		ScavTrap::takeDamage(unsigned int damageAmount)
{
	std::string randomTakeDamagePhrase[7] = {
		"Why do I even feel pain?!",
		"Why did they build me out of galvanized flesh?!",
		"Ow hohoho, that hurts! Yipes!",
		"My robotic flesh! AAHH!",
		"Yikes! Ohhoho!",
		"Woah! Oh! Jeez!",
		"If only my chassis... weren't made of recycled human body parts! Wahahaha!"
	};
	std::string randomCriticalDamagePhrase[6] = {
		"Pop pop!",
		"Crit-i-cal!",
		"That looks like it hurts!",
		"WOW! I hit 'em!",
		"Extra ouch!",
		"Shwing!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << scavDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* ScavTrap " << RED_COLOR << this->getName() << END_COLOR;
	std::cout << " has been damaged at " << damageAmount;

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

	std::cout << " current Hit Point: " << GRAY_BACKGROND << this->getHitPoints() << " hp" << END_COLOR << " *" << std::endl;
	std::cout << randomTakeDamagePhrase[std::rand() % 7] << std::endl;

	if (this->hitPoints_ == 0)
	{
		std::cout << "* ScavTrap " << this->getName() << " died *" << std::endl;
		std::cout << randomCriticalDamagePhrase[std::rand() % 6] << std::endl;
	}

	return this->getHitPoints();
}

unsigned int		ScavTrap::beRepaired(unsigned int healAmount)
{
	std::string randomTakeDamagePhrase[5] = {
		"Health! Eww, what flavor is red?",
		"Health over here!",
		"Sweet life juice!",
		"I found health!",
		"Healsies!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << scavDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " has been healed at " << healAmount;

	this->hitPoints_ = this->hitPoints_ + healAmount > (unsigned int)this->maxHitPoints_ ? this->maxHitPoints_ : this->hitPoints_ + healAmount;
	std::cout << " current Hit Point: " << this->getHitPoints() << " hp *" << std::endl;

	std::cout << randomTakeDamagePhrase[std::rand() % 5] << std::endl;
	return this->getHitPoints();
}

std::string			ScavTrap::challengeNewcomer(std::string const & newcomer)
{
	std::string randomQuest[5] = {
		"What is the only correct operating system?",
		"Shut up and dance with me!",
		"Give me a coffee? Black coffee... Black... like my soul.",
		"Beat me in a rap battle with a KILLer PUNCHline",
		"Give me your princesses!"
	};

	int		randomQuestIndex = std::rand() % 5;
	std::cout << "* SC4V-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special challengeNewcomer skill on " << newcomer << " *" << std::endl;
	if (this->getHitPoints() == 0)
	{
		std::cout << "* ScavTrap " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << scavDeadMumbling[std::rand() % 5] << std::endl;
		return "";
	}

	if (this->energyPoints_ < 25)
	{
		std::cout << "* SC4V-TP " << GREEN_COLOR << this->getName() << END_COLOR << " has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return "";
	}

	this->energyPoints_ -=25;
	
	std::cout << randomQuest[randomQuestIndex] << std::endl;
	return randomQuest[randomQuestIndex];
}

