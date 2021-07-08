#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(int hitPoint, std::string const& type);
		SuperMutant(SuperMutant const& copy);
		virtual ~SuperMutant();
		SuperMutant	&operator=(SuperMutant const &other);

		std::string		getType()const;
		int				getHitPoint()const;

		virtual void	takeDamage(int damage);
};

#endif
