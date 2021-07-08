#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include <string>
# include "Victim.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class Sorcerer {
	private:
		std::string		name_;
		std::string		title_;
					
					Sorcerer();
	public:
					Sorcerer(std::string name, std::string title);
					Sorcerer(const Sorcerer &copy);
		virtual		~Sorcerer();

		Sorcerer&	operator= (const Sorcerer &other);

		std::string		getName()const;	
		std::string		getTitle()const;

		void			introduce()const;
		void			polymorph(Victim const &victim)const;
};

std::ostream& operator<< (std::ostream& out, Sorcerer const& sorcerer);

#endif