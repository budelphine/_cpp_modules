#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string			name_;
		Weapon				&weapon_;

	public:
		HumanA(std::string name, Weapon &weapon);
		
		std::string			getName();
		void				setName(std::string name);
		
		void				attack();
};

#endif
