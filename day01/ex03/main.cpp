#include "ZombieHorde.hpp"

int	main()
{
	std::cout << "Welcome to ex03 - Moar brainz !" << std::endl << std::endl;

	ZombieHorde	*ZombieHordeArray = new ZombieHorde(7);
	ZombieHordeArray->announce();

	return 0;
}