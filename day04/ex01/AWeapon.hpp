#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define	GRAY_COLOR "\x1b[37;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class AWeapon
{
	protected:
		std::string		name_;
		int				damage_;
		int				APCost_;
		std::string		sounds_;

	public:
		AWeapon();
		AWeapon(std::string const& name, int damage, int APCost);
		AWeapon(std::string const& name, int damage, int APCost, std::string sounds);
		AWeapon(AWeapon const& copy);
		virtual ~AWeapon();
		AWeapon		&operator=(AWeapon const &other);

		std::string getName()const;
		std::string getSounds()const;
		int getAPCost()const;
		int getDamage()const;
	
		virtual void attack()const = 0;
};

#endif
