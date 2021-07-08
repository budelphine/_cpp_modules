#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle( );
		PlasmaRifle(std::string const& name, int damage, int APCost);
		PlasmaRifle(PlasmaRifle const &copy);
		virtual ~PlasmaRifle();
		
		PlasmaRifle		&operator=(PlasmaRifle const &other);
	
		virtual void attack()const;
};

#endif
