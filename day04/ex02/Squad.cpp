#include "Squad.hpp"

Squad::Squad() : count_(0), units_(nullptr)
{
}

Squad::Squad(Squad const &copy)
{
	if (this->count_ > 0)
	{
		for (int i = 0; i < count_; i++)
			delete units_[i];
		delete units_;
	}

	this->count_ = copy.count_;
	for (int i = 0; i < copy.count_; i++)
		this->push(copy.getUnit(i)->clone());
}

Squad::~Squad( )
{
	if (count_ <= 0) { return ; }

	for (int i = 0; i < count_; i++)
		delete units_[i];
	delete units_;
}

Squad&	Squad::operator=(Squad const &other)
{
	if (this == &other)
		return *this;

	if (this->count_ > 0)
	{
		for (int i = 0; i < count_; i++)
			delete units_[i];
		delete units_;
	}
	
	this->count_ = other.count_;
	for (int i = 0; i < other.count_; i++)
		this->push(other.getUnit(i)->clone());
	return *this;
}

int				Squad::getCount()const
{
	return this->count_;
}

ISpaceMarine*	Squad::getUnit(int index)const
{
	if (index < 0 || index > count_ || count_ <= 0)
		return nullptr;
	return this->units_[index];
}

int				Squad::push(ISpaceMarine* newUnit)
{
	if (!newUnit)
		return this->count_;
	
	if (!this->units_)
	{
		this->count_ = 1;
		this->units_ = new ISpaceMarine*[this->count_];
		this->units_[this->count_ - 1] = newUnit;
		return this->count_;
	}

	for (int i = 0; i < this->count_; i++)
	{
		if (this->units_[i] == newUnit)
			return this->count_;
	}
	ISpaceMarine **newUnitsArray = new ISpaceMarine*[this->count_ + 1];
	for (int i = 0; i < this->count_; i++)
		newUnitsArray[i] = this->units_[i];
	delete [] this->units_;
	this->units_ = newUnitsArray;
	this->units_[this->count_] = newUnit;
	this->count_++;

	return this->count_;
}
