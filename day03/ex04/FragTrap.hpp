#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
					FragTrap();
					FragTrap(std::string name);
					FragTrap(const FragTrap &copy);
					~FragTrap();

		FragTrap&	operator= (const FragTrap &other);
		
		virtual unsigned int		rangedAttack(std::string const& targetName);
		virtual unsigned int		meleeAttack(std::string const& targetName);
		virtual unsigned int		takeDamage(unsigned int damageAmount);
		virtual unsigned int		beRepaired(unsigned int healAmount);

		virtual unsigned int		vaulthunter_dot_exe(std::string const & target);

};

#endif