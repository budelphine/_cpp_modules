#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Enemy.hpp"

class Zombie : public Enemy
{
	public:
		Zombie();
		Zombie(int hitPoint, std::string const& type);
		Zombie(Zombie const& copy);
		virtual ~Zombie();
		Zombie	&operator=(Zombie const &other);

		std::string		getType()const;
		int				getHitPoint()const;

		virtual void	takeDamage(int damage);
};

#endif
