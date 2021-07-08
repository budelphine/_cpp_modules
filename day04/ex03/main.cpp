#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Wool.hpp"
#include "MateriaSource.hpp"

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	std::cout << "Welcome to ex03 - Bocal Fantasy" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Wool());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("Ice");
	me->equip(tmp);

	tmp = src->createMateria("Cure");
	me->equip(tmp);

	tmp = src->createMateria("Wool");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl << "* Afterlife *" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}