#include "FragTrap.hpp"

void				FragTrap::setName(std::string name) { this->name_ = name; }
std::string			FragTrap::getName()const { return this->name_; }
int					FragTrap::getHitPoints()const { return this->hitPoints_; }
int					FragTrap::getMaxHitPoints()const { return this->maxHitPoints_; }
int					FragTrap::getEnergyPoints()const { return this->energyPoints_; }
int					FragTrap::getMaxEnergyPoints()const { return this->maxEnergyPoints_; }
int					FragTrap::getLevel()const { return this->level_; }
int					FragTrap::getMeleeAttackDamage()const { return this->meleeAttackDamage_; }
int					FragTrap::getRangedAttackDamage()const { return this->rangedAttackDamage_; }
int					FragTrap::getArmorDamageReduction()const { return this->armorDamageReduction_; }

std::string fragDeadMumbling[5] = {
		"` Bip bop! `",
		"` Shhhhhh `",
		"` Piip pooop `",
		"` Rattle `",
		"` Shwing! `"
	};

FragTrap::FragTrap() : name_("defaultFragTrap")
{
	std::cout << "* FR4G-TP Default constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Let's get this party started!" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
}

FragTrap::FragTrap(std::string name) : name_(name)
{
	std::cout << "* FR4G-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;

	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "* FR4G-TP Copy constructor called *" << std::endl;
	
	this->name_ = copy.getName();
	this->hitPoints_ = copy.getHitPoints();
	this->maxHitPoints_ = copy.getMaxHitPoints();
	this->energyPoints_ = copy.getEnergyPoints();
	this->maxEnergyPoints_ = copy.getMaxEnergyPoints();
	this->level_ = copy.getLevel();
	this->meleeAttackDamage_ = copy.getMeleeAttackDamage();
	this->rangedAttackDamage_ = copy.getRangedAttackDamage();
	this->armorDamageReduction_ = copy.getArmorDamageReduction();

	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Running the sequencer!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "* FR4G-TP Destructor called *" << std::endl;
	std::cout << BLUE_COLOR << this->getName() << END_COLOR << ": I'll stop talking only when I'm dead! ";
	std::cout << "Wait... I'm already? Ugh..." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other) {
	std::cout << "* FR4G-TP Assignation operator called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Recompiling my combat code!" << std::endl;
	
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

unsigned int		FragTrap::rangedAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[9] = {
		"Grenade!",
		"Grenaaaade!",
		"Hot potato!",
		"Pull pin, throw!",
		"Take that!",
		"Throwing grenade!",
		"Bad guy go boom!",
		"Eat bomb, baddie!",
		"Present for you!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << fragDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *range*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;

	std::cout << randomAttackPhrase[std::rand() % 9] << std::endl;
	return this->getRangedAttackDamage();
}

unsigned int		FragTrap::meleeAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[5] = {
		"Hyah!",
		"Heyyah!",
		"Take that!",
		"Bop!",
		"Yeehaw!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << fragDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *melee*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;
	
	std::cout << randomAttackPhrase[std::rand() % 5] << std::endl;
	return this->getMeleeAttackDamage();
}

unsigned int		FragTrap::takeDamage(unsigned int damageAmount)
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
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << fragDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << RED_COLOR << this->getName() << END_COLOR;
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
		std::cout << "* FR4G-TP " << this->getName() << " died *" << std::endl;
		std::cout << randomCriticalDamagePhrase[std::rand() % 6] << std::endl;
	}

	return this->getHitPoints();
}

unsigned int		FragTrap::beRepaired(unsigned int healAmount)
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
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << fragDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " has been healed at " << healAmount;

	this->hitPoints_ = this->hitPoints_ + healAmount > (unsigned int)this->maxHitPoints_ ? this->maxHitPoints_ : this->hitPoints_ + healAmount;
	std::cout << " current Hit Point: " << this->getHitPoints() << " hp *" << std::endl;

	std::cout << randomTakeDamagePhrase[std::rand() % 5] << std::endl;
	return this->getHitPoints();
}

unsigned int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			randomAttackValue[5] = {5, 10, 2, 25, 30};
	std::string randomAttackName[5] = {
		"Step right up, to the Bulletnator 9000!",
		"Freeze! I don't know why I said that",
		"Meat confetti!",
		"I'm a sexy dinosaur! Rawrrrr!",
		"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!"
	};

	int		randomAttackIndex = std::rand() % 5;

	std::cout << "* FR4G-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special vaulthunter_dot_exe attack on ";
	std::cout << VIOLET_COLOR << target << END_COLOR << std::endl;

	if (this->getHitPoints() == 0)
	{
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << fragDeadMumbling[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->energyPoints_ < 25)
	{
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	this->energyPoints_ -=25;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	return randomAttackValue[randomAttackIndex];
}

