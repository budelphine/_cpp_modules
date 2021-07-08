#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

# define MAX_STORAGE 4

class MateriaSource : public IMateriaSource
{
	protected:
		int				count_;
		AMateria*		inventory_[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource& other);

		void		learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const& type);
};

#endif

#include "IMateriaSource.hpp"
