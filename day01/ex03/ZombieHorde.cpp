#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
	int count = std::rand() % 7;
	
	if (count <= 0)
	{
		this->count_ = 0;
		std::cerr << "The Array of Zombie can't be create. Please, set correct count";
		return ;
	}
	this->count_ = count;
	this->zombie_ = new Zombie[count];	
}

ZombieHorde::ZombieHorde(int count)
{
	if (count <= 0)
	{
		this->count_ = 0;
		std::cerr << "The Array of Zombie can't be create. Please, set correct count";
		return ;
	}
	this->count_ = count;
	this->zombie_ = new Zombie[count];
}

void			ZombieHorde::announce()
{
	for (int i = 0; i < this->count_; i++)
	{
		this->zombie_[i].announce();
	}
}