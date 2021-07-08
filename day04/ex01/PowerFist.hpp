#ifndef POWERFIST_H
# define POWERFIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(std::string const& name, int damage, int APCost);
		PowerFist(PowerFist const &copy);
		virtual ~PowerFist();
		
		PowerFist		&operator=(PowerFist const &other);
	
		virtual void attack()const;
};

#endif
