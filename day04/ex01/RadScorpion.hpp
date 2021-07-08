#ifndef RADSCORPION_H
# define RADSCORPION_H

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(int hitPoint, std::string const& type);
		RadScorpion(RadScorpion const& copy);
		virtual ~RadScorpion();
		RadScorpion	&operator=(RadScorpion const &other);

		std::string		getType()const;
		int				getHitPoint()const;

		virtual void	takeDamage(int damage);
};

#endif
