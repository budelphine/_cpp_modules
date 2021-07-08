#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string		name_;
		std::string		type_;

	public:
		ZombieEvent();
		ZombieEvent(std::string name);
		ZombieEvent(std::string name, std::string type);
		
		std::string			getName();
		std::string			getType();

		void				setName(std::string name);
		void				setType(std::string type);

		void				setZombieName(Zombie *zombie, std::string name);
		void				setZombieType(Zombie *zombie, std::string type);
		Zombie*				newZombie(std::string name);
};

#endif
