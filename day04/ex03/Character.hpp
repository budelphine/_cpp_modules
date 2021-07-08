#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define MAX_STORAGE 4

class Character : public ICharacter
{
	protected:
		std::string		name_;
		int				count_;
		AMateria*		inventory_[4];

	public:
		Character(std::string name);
		Character(const Character& copy);
		virtual ~Character();
		Character	&operator=(const Character& other);

		std::string const&	getName()const;
		void				equip(AMateria* materia);
		void				unequip(int slotIndex);
		void				use(int slotIndex, ICharacter& target);
};

#endif

#include "ICharacter.hpp"
