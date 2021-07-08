#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Zombie.hpp"

class ZombieHorde {
	private:
		int			count_;
		Zombie		*zombie_;

	public:
		ZombieHorde();
		ZombieHorde(int count);
		
		void		announce();		
};

#endif