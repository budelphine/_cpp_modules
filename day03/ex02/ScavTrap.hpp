#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
					ScavTrap();
					ScavTrap(std::string name);
					ScavTrap(const ScavTrap &copy);
					~ScavTrap();

		ScavTrap&	operator= (const ScavTrap &other);
		
		virtual unsigned int		rangedAttack(std::string const& targetName);
		virtual unsigned int		meleeAttack(std::string const& targetName);
		virtual unsigned int		takeDamage(unsigned int damageAmount);
		virtual unsigned int		beRepaired(unsigned int healAmount);

		std::string			challengeNewcomer(std::string const & newcomer);
};

#endif