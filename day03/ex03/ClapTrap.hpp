#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class ClapTrap {
	protected:
		std::string		name_;
		int				hitPoints_;
		int				maxHitPoints_;
		int				energyPoints_;
		int				maxEnergyPoints_;
		int				level_;
		int				meleeAttackDamage_;
		int				rangedAttackDamage_;
		int				armorDamageReduction_;
		const static std::string		trapDeadMumbling_[5];

	public:
					ClapTrap();
					ClapTrap(std::string name);
					ClapTrap(std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction);
					ClapTrap(const ClapTrap &copy);
					~ClapTrap();

		ClapTrap&	operator= (const ClapTrap &other);

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
		
		virtual unsigned int		rangedAttack(std::string const& targetName);
		virtual unsigned int		meleeAttack(std::string const& targetName);
		virtual unsigned int		takeDamage(unsigned int damageAmount);
		virtual unsigned int		beRepaired(unsigned int healAmount);
};

#endif