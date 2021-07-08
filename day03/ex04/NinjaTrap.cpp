#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("defaultNinjaTrap", 60, 60, 120, 120, 1, 60, 50, 0)
{
	std::cout << "* NINJ4-TP Default constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Hey, best friend!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 50, 0)
{
	std::cout << "* NINJ4-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Let me teach you the ways of magic!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << "* NINJ4-TP Copy constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "Sooooo... how are things?" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "* NINJ4-TP Destructor called *" << std::endl;
	std::cout << BLUE_COLOR << this->getName() << END_COLOR << ": ";
	std::cout << "Defragmenting!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap &other) {
	std::cout << "* NINJ4-TP Assignation operator called *" << std::endl;
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

unsigned int		NinjaTrap::rangedAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[6] = {
		"I'm cloaking...",
		"Roses are red and/Violets are blue/Wait... how many syllables was that?",
		"Shoot him... he's the real one...",
		"I'm a robot ninja...",
		"I'm invisible!",
		"Calm down!"
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *range*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;

	std::cout << randomAttackPhrase[std::rand() % 6] << std::endl;
	return ClapTrap::rangedAttack(targetName);
}

unsigned int		NinjaTrap::meleeAttack(std::string const& targetName)
{
	std::string randomAttackPhrase[5] = {
		"Boiyoiyoiyoiyoing!",
		"Zing! Bullet reflection!",
		"I am rubber, and you are so dead!",
		"I'm a superball!",
		"Trouncy, flouncy... founcy... those aren't words."
	};

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *melee*, causing " << this->getMeleeAttackDamage() << " points of damage! *" << std::endl;
	
	std::cout << randomAttackPhrase[std::rand() % 5] << std::endl;
	return ClapTrap::meleeAttack(targetName);
}

unsigned int		NinjaTrap::takeDamage(unsigned int damageAmount)
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
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* NINJ4-TP " << RED_COLOR << this->getName() << END_COLOR;
	std::cout << " has been damaged at " << damageAmount;

	ClapTrap::takeDamage(damageAmount);

	std::cout << " current Hit Point: " << GRAY_BACKGROND << this->getHitPoints() << " hp" << END_COLOR << " *" << std::endl;
	std::cout << randomTakeDamagePhrase[std::rand() % 7] << std::endl;

	if (this->hitPoints_ == 0)
	{
		std::cout << "* NINJ4-TP " << this->getName() << " died *" << std::endl;
		std::cout << randomCriticalDamagePhrase[std::rand() % 6] << std::endl;
	}

	return this->getHitPoints();
}

unsigned int		NinjaTrap::beRepaired(unsigned int healAmount)
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
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " has been healed at " << healAmount;

	ClapTrap::beRepaired(healAmount);
	std::cout << " current Hit Point: " << this->getHitPoints() << " hp *" << std::endl;

	std::cout << randomTakeDamagePhrase[std::rand() % 5] << std::endl;
	return this->getHitPoints();
}

unsigned int		NinjaTrap::ninjaShoebox(NinjaTrap &enemy)
{
	int			randomAttackValue[10] = {7, 14, 21, 28, 35, 42, 49, 56, 63, 0};
	std::string randomAttackName[10] = {
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
		"I'm on a roll!",
		"Unts unts unts unts!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!",
		"There is no way this ends badly!",
		"This is why I was built!"
	};

	int		randomAttackIndex = std::rand() % 10;

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "* NINJ4-TP has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	this->energyPoints_ -=25;
	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special ninjaShoebox attack";
	std::cout << " on " << VIOLET_COLOR << enemy.getName() << END_COLOR << " *" << std::endl;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	enemy.takeDamage(randomAttackValue[randomAttackIndex]);
	return randomAttackValue[randomAttackIndex];
}

unsigned int		NinjaTrap::ninjaShoebox(FragTrap &enemy)
{
	int			randomAttackValue[10] = {7, 14, 21, 28, 35, 42, 49, 56, 63, 0};
	std::string randomAttackName[10] = {
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
		"I'm on a roll!",
		"Unts unts unts unts!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!",
		"There is no way this ends badly!",
		"This is why I was built!"
	};

	int		randomAttackIndex = std::rand() % 10;

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "* NINJ4-TP has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	this->energyPoints_ -=25;
	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special ninjaShoebox attack";
	std::cout << " on " << VIOLET_COLOR << enemy.getName() << END_COLOR << " *" << std::endl;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	enemy.takeDamage(randomAttackValue[randomAttackIndex]);
	return randomAttackValue[randomAttackIndex];
}

unsigned int		NinjaTrap::ninjaShoebox(ScavTrap &enemy)
{
	int			randomAttackValue[10] = {7, 14, 21, 28, 35, 42, 49, 56, 63, 0};
	std::string randomAttackName[10] = {
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
		"I'm on a roll!",
		"Unts unts unts unts!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!",
		"There is no way this ends badly!",
		"This is why I was built!"
	};

	int		randomAttackIndex = std::rand() % 10;

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "* NINJ4-TP has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	this->energyPoints_ -=25;
	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special ninjaShoebox attack";
	std::cout << " on " << VIOLET_COLOR << enemy.getName() << END_COLOR << " *" << std::endl;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	enemy.takeDamage(randomAttackValue[randomAttackIndex]);
	return randomAttackValue[randomAttackIndex];
}

unsigned int		NinjaTrap::ninjaShoebox(ClapTrap &enemy)
{
	int			randomAttackValue[10] = {7, 14, 21, 28, 35, 42, 49, 56, 63, 0};
	std::string randomAttackName[10] = {
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
		"I'm on a roll!",
		"Unts unts unts unts!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!",
		"There is no way this ends badly!",
		"This is why I was built!"
	};

	int		randomAttackIndex = std::rand() % 10;

	if (this->getHitPoints() == 0)
	{
		std::cout << "* NINJ4-TP " << GREEN_COLOR << this->getName() << END_COLOR << " - is dead *" << std::endl;
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "* NINJ4-TP has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	this->energyPoints_ -=25;
	std::cout << "* NINJ4-TP " << BLUE_COLOR << this->getName() << END_COLOR << " use special ninjaShoebox attack";
	std::cout << " on " << VIOLET_COLOR << enemy.getName() << END_COLOR << " *" << std::endl;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	enemy.takeDamage(randomAttackValue[randomAttackIndex]);
	return randomAttackValue[randomAttackIndex];
}

