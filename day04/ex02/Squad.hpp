#ifndef SQUAD_H
# define SQUAD_H

# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define	GRAY_COLOR "\x1b[37;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class Squad : public ISquad
{
	protected:
		int				count_;
		ISpaceMarine	**units_;

	public:
		Squad();
		Squad(Squad const& copy);
		virtual ~Squad();
		Squad	&operator=(Squad const &other);

		int				getCount()const;
		ISpaceMarine*	getUnit(int index)const;
		int				push(ISpaceMarine* newUnit);
};

#endif
