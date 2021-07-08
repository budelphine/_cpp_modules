#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	private:
		std::string		name_;
		std::string		type_;

	public:
		Zombie();
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		
		std::string		getName();
		std::string		getType();
		void			setName(std::string name);
		void			setType(std::string type);

		void			announce();
};

#endif
