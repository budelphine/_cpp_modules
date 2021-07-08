#include "Character.hpp"

std::string const&	Character::getName()const { return this->name_; }

Character::Character(std::string name) : name_(name), count_(0)
{
	for (int i = 0; i < MAX_STORAGE; i++)
		this->inventory_[i] = nullptr;
}

Character::Character(Character const &copy) : name_(copy.name_), count_(copy.count_)
{
	for (int i = 0; i < copy.count_; i++)
		this->inventory_[i] = copy.inventory_[i];
}

Character::~Character( )
{
}

Character&	Character::operator=(Character const &other)
{
	if (this == &other)
		return *this;
	
	this->name_ = other.name_;
	this->count_ = other.count_;
	for (int i = 0; i < other.count_; i++)
		this->inventory_[i] = other.inventory_[i];
	
	return *this;
}

void		Character::equip(AMateria* materia)
{
	if (this->count_ == MAX_STORAGE || !materia)
		return ;
	
	for (int i = 0; i < this->count_; i++)
	{
		if (this->inventory_[i] == materia)
			return ;
	}
	
	this->inventory_[this->count_] = materia;
	this->count_++;
}

void		Character::unequip(int slotIndex)
{
	if (slotIndex < 0 || slotIndex >= MAX_STORAGE)
		return ;

	for (int i = slotIndex; i < this->count_ - 1; i++)
		this->inventory_[i] = this->inventory_[i + 1];
	this->inventory_[this->count_ - 1] = nullptr;
	this->count_--;
}

void		Character::use(int slotIndex, ICharacter& target)
{
	if (slotIndex < 0 || slotIndex >= this->count_ || this->inventory_[slotIndex] == nullptr)
		return ;
	
	this->inventory_[slotIndex]->use(target);
}

