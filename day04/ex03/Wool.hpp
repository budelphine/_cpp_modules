#ifndef WOOL_HPP
# define WOOL_HPP

# include "AMateria.hpp"

class Wool : public AMateria
{
	public:
		Wool();
		Wool(Wool const& copy);
		virtual ~Wool();
		Wool	&operator=(Wool const &other);
	
		AMateria*				clone()const;
		void					use(ICharacter& target);
};

#endif
