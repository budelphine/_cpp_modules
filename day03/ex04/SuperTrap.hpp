#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
					SuperTrap();
					SuperTrap(std::string name);
					SuperTrap(const SuperTrap &copy);
					~SuperTrap();

		SuperTrap&	operator= (const SuperTrap &other);
		
		virtual unsigned int		rangedAttack(std::string const& targetName);
		virtual unsigned int		meleeAttack(std::string const& targetName);
		virtual unsigned int		takeDamage(unsigned int damageAmount);
		virtual unsigned int		beRepaired(unsigned int healAmount);

		virtual unsigned int		vaulthunter_dot_exe(std::string const & target);

		virtual unsigned int		ninjaShoebox(NinjaTrap &enemy);
		virtual unsigned int		ninjaShoebox(FragTrap &enemy);
		virtual unsigned int		ninjaShoebox(ScavTrap &enemy);
		virtual unsigned int		ninjaShoebox(ClapTrap &enemy);
};

#endif