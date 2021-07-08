#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
					NinjaTrap();
					NinjaTrap(std::string name);
					NinjaTrap(const NinjaTrap &copy);
					~NinjaTrap();

		NinjaTrap&	operator= (const NinjaTrap &other);
		
		virtual unsigned int		rangedAttack(std::string const& targetName);
		virtual unsigned int		meleeAttack(std::string const& targetName);
		virtual unsigned int		takeDamage(unsigned int damageAmount);
		virtual unsigned int		beRepaired(unsigned int healAmount);

		virtual unsigned int			ninjaShoebox(NinjaTrap &enemy);
		virtual unsigned int			ninjaShoebox(FragTrap &enemy);
		virtual unsigned int			ninjaShoebox(ScavTrap &enemy);
		virtual unsigned int			ninjaShoebox(ClapTrap &enemy);
};

#endif