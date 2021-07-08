#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

std::string randomNames[7] = {
	"Memilio",
	"Sjakku",
	"Atomatoe",
	"Asumerag",
	"Hgrampa",
	"Mdenys",
	"Budelphi"
};

std::string randomTypes[7] = {
	"Pride",
	"Envy",
	"Wrath",
	"Sloth",
	"Avarice",
	"Gluttony",
	"Lust"
};

void	randomChump() {	
	Zombie* randomZombie = new Zombie(randomNames[std::rand() % 7], randomTypes[std::rand() % 7]);
	randomZombie->announce();
	
	delete randomZombie;
	randomZombie = NULL;
}

int		main()
{
	std::srand(std::time(0));
	std::cout << "Welcome to ex02 - Plucking some brains" << std::endl << std::endl;

	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();

	return 0;
}

