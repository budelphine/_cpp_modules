#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"

#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"

#define	END_COLOR "\x1b[0m"



class ScavTrap {
	private:
		std::string		name_;
		int				hitPoints_;
		int				maxHitPoints_;
		int				energyPoints_;
		int				maxEnergyPoints_;
		int				level_;
		int				meleeAttackDamage_;
		int				rangedAttackDamage_;
		int				armorDamageReduction_;

	public:
					ScavTrap();
					ScavTrap(std::string name);
					ScavTrap(const ScavTrap &copy);
					~ScavTrap();

		ScavTrap&	operator= (const ScavTrap &other);

		void		setName(std::string name);

		std::string	getName()const;
		int			getHitPoints()const;
		int			getMaxHitPoints()const;
		int			getEnergyPoints()const;
		int			getMaxEnergyPoints()const;
		int			getLevel()const;
		int			getMeleeAttackDamage()const;
		int			getRangedAttackDamage()const;
		int			getArmorDamageReduction()const;
		
		unsigned int		rangedAttack(std::string const& targetName);
		unsigned int		meleeAttack(std::string const& targetName);
		unsigned int		takeDamage(unsigned int damageAmount);
		unsigned int		beRepaired(unsigned int healAmount);

		std::string			challengeNewcomer(std::string const & newcomer);

};

#endif