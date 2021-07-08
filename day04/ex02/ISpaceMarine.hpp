#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

# include <iostream>
# include <string>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define	GRAY_COLOR "\x1b[37;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone()const = 0;
		virtual void battleCry()const = 0;
		virtual void rangedAttack()const = 0;
		virtual void meleeAttack()const = 0;
};

#endif
