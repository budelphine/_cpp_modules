#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count_(0)
{
	for (int i = 0; i < MAX_STORAGE; i++)
		this->inventory_[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &copy) : count_(copy.count_)
{
	for (int i = 0; i < copy.count_; i++)
		this->inventory_[i] = copy.inventory_[i];
}

MateriaSource::~MateriaSource( )
{
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &other)
{
	if (this == &other)
		return *this;

	this->count_ = other.count_;
	for (int i = 0; i < other.count_; i++)
		this->inventory_[i] = other.inventory_[i];
	
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (this->count_ == MAX_STORAGE || !materia)
		return ;

	this->inventory_[this->count_] = materia;
	this->count_++;
}

AMateria	*MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < this->count_; i++)
		if (this->inventory_[i]->getType() == type)
			return this->inventory_[i]->clone();
	return nullptr;
}
