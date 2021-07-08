#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class Victim {
	protected:
		std::string		name_;
		
	public:
					Victim();
					Victim(std::string name);
					Victim(const Victim &copy);
		virtual		~Victim();

		Victim&	operator= (const Victim &other);

		std::string		getName()const;	

		virtual void			getPolymorphed()const;
		virtual void			introduce()const;

};

std::ostream& operator<< (std::ostream& out, Victim const& Victim);

#endif