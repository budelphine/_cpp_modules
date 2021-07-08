#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("defaultFragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "* FR4G-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "* FR4G-TP Default named constructor called *" << std::endl;
	std::cout << GREEN_COLOR << this->getName() << ": " << END_COLOR;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "* FR4G-TP Copy constructor called *" << std::endl;
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
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *range*, causing " << this->getRangedAttackDamage() << " points of damage! *" << std::endl;

	std::cout << randomAttackPhrase[std::rand() % 9] << std::endl;
	return ClapTrap::rangedAttack(targetName);
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
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << BLUE_COLOR << this->getName() << END_COLOR;
	std::cout << " attacks " << VIOLET_COLOR << targetName << END_COLOR;
	std::cout << " at *melee*, causing " << this->getMeleeAttackDamage() << " points of damage! *" << std::endl;
	
	std::cout << randomAttackPhrase[std::rand() % 5] << std::endl;
	return ClapTrap::meleeAttack(targetName);
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
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << RED_COLOR << this->getName() << END_COLOR;
	std::cout << " has been damaged at " << damageAmount;

	ClapTrap::takeDamage(damageAmount);

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
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR;
	std::cout << " has been healed at " << healAmount;

	ClapTrap::beRepaired(healAmount);
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
		std::cout << trapDeadMumbling_[std::rand() % 5] << std::endl;
		return 0;
	}

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "* FR4G-TP " << GREEN_COLOR << this->getName() << END_COLOR << " has only " << this->getEnergyPoints() << " EnergyPoints - it's to low *" << std::endl;
		return 0;
	}

	ClapTrap::energyPoints_ -=25;
	std::cout << randomAttackName[randomAttackIndex] << std::endl;

	return randomAttackValue[randomAttackIndex];
}
