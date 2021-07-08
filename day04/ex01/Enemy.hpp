#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define	GRAY_COLOR "\x1b[37;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class Enemy
{
	protected:
		int			hitPoint_;
		std::string	type_;

	public:
		Enemy();
		Enemy(int hitPoint, std::string const& type);
		Enemy(Enemy const& copy);
		virtual ~Enemy();
		Enemy	&operator=(Enemy const &other);

		std::string		getType()const;
		int				getHitPoint()const;

		virtual void	takeDamage(int damage);
};

#endif
