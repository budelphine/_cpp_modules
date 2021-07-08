#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const& copy);
		virtual ~Ice();
		Ice	&operator=(Ice const &other);
	
		AMateria*				clone()const;
		void					use(ICharacter& target);
};

#endif
