#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>
# include <iomanip>

class Weapon {
	private:
		std::string			type_;

	public:
		Weapon();
		Weapon(std::string type);
		
		std::string				&getType();
		void					setType(std::string type);
};

#endif
