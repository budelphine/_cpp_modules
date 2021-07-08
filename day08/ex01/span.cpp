#include "span.hpp"

Span::Span() : size_(0)
{

}

Span::Span(unsigned int size) : size_(size)
{
}

Span::Span(Span const &copy)
{
	if (this == &copy)
		return ;
	
	this->value_ = copy.value_;
	this->size_ = copy.size_;
}

Span&	Span::operator=(Span const &other)
{
	if (this == &other)
		return *this;
	
	this->value_ = other.value_;
	this->size_ = other.size_;
	return *this;
}

Span::~Span()
{
	this->value_.clear();
}

unsigned int	Span::getSize()const
{
	return this->size_;
}

void	Span::addNumber(int value)
{
	if (this->size_ == this->value_.size())
		throw ArrayIsFullException();
	this->value_.push_back(value);
	std::sort(this->value_.begin(), this->value_.end());
}

void	Span::addNumber(int value, int range)
{
	if (this->size_ == this->value_.size())
		throw ArrayIsFullException();
	
	if (this->value_.size() + range > this->size_)
		throw OutOfIndexException();

	for (int i = 0; i < range; i++)
		this->value_.push_back(value);
	std::sort(this->value_.begin(), this->value_.end());
}

int		Span::shortestSpan()
{
	if (this->value_.size() < 2)
		throw ToFewElementException();
	
	int minSpan = INT_MAX;
	for (unsigned long i = 1; i < this->value_.size(); i++) {
		int diff = this->value_[i] - this->value_[i - 1];
		minSpan = minSpan > diff ? diff : minSpan;
	}
	return minSpan;
}

int		Span::longestSpan()
{
	if (this->value_.size() < 2)
		throw ToFewElementException();
	return this->value_.back() - this->value_.front();
}

void	Span::printValue()const
{
	for (int i = 0; i < this->value_.size() ; i++)
		std::cout << "vector [" << i << "] " << this->value_[i] << std::endl;
}

const char* Span::ArrayIsFullException::what() const throw()
{
	return "Array is full.";
}

const char* Span::ToFewElementException::what() const throw()
{
	return "To few element for shortest and longest span.";
}

const char* Span::OutOfIndexException::what() const throw()
{
	return "Out of index.";
}

