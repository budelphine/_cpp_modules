#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string			name_;
		Weapon				*weapon_;

	public:
		HumanB(std::string name);
		
		std::string			getName();
		void				setName(std::string name);

		void				setWeapon(Weapon &type);
		void				attack();
};

#endif
