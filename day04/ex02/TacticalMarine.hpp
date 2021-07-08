#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include "ISpaceMarine.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define	GRAY_COLOR "\x1b[37;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const& copy);
		virtual ~TacticalMarine();
		TacticalMarine	&operator=(TacticalMarine const &other);

		void		battleCry()const;
		void		rangedAttack()const;
		void		meleeAttack()const;
		
		ISpaceMarine*		clone()const;
};

#endif
