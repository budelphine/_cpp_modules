#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>

# include "Enemy.hpp"
# include "Zombie.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"

class Character
{
	protected:
		std::string	name_;
		int			hitPoint_;
		int			APStorage_;
		int			maxAPStorage_;
		AWeapon*	weapon_;

		Character();

	public:
		Character(std::string const& name);
		Character(Character const& copy);
		virtual ~Character();
		Character	&operator=(Character const &other);

		std::string		getName()const;
		int				getHitPoint()const;
		int				getAPStorage()const;
		int				getMaxAPStorage()const;
		AWeapon*		getWeapon()const;

		void			recoverAP();
		void			equip(AWeapon* aWeapon);
		void			attack(Enemy* enemy);
};

std::ostream    &operator<<(std::ostream &out, Character &character);

#endif
