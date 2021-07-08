#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
# include <limits>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string		type_;
		unsigned int	xp_;

	public:
		AMateria(std::string type);
		AMateria(AMateria const& copy);
		virtual ~AMateria();
		AMateria	&operator=(AMateria const &other);
	
		std::string const&		getType()const;
		unsigned int			getXP()const;

		virtual AMateria*		clone()const = 0;
		virtual void			use(ICharacter& target);
};

#endif
