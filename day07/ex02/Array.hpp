#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string.h>
# include <iostream>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

template <typename T>
class Array
{
	private:
		T				*array_;
		unsigned int	size_;
	
	public:
		Array() : array_(nullptr), size_(0) { };

		Array(unsigned int size) : array_(nullptr), size_(size)
		{
			if (this->size_ == 0)
				throw InvalidArraySizeException();
			this->array_ = new T[this->size_]();
		}

		Array(const Array<T> &copy)
		{
			if (this == &copy)
				return ;
			
			if (this->array_)
				delete[] this->array_;

			if (copy.getSize() != 0)
			{
				this->array_ = new T[copy.size_]();
				for (unsigned int i = 0; i < copy.getSize(); i++)
					this->array_[i] = copy.array_[i];
			}
			else
				this->array_ = nullptr;
			
			this->size_ = copy.size_;
		};

		Array&	operator=(const Array &other)
		{
			if (this == &other)
				return *this;
			
			if (this->array_)
				delete[] this->array_;

			if (other.getSize() != 0)
			{
				this->array_ = new T[other.size_]();
				for (unsigned int i = 0; i < other.getSize(); i++)
					this->array_[i] = other.array_[i];
			}
			else
				this->array_ = nullptr;
			
			this->size_ = other.size_;
			return *this;
		};

		virtual ~Array()
		{
			delete[] this->array_;
		};

		unsigned int	getSize()const
		{
			return this->size_;
		}

		T& operator[](int index)
		{
			if (index < 0 || index >= (int)this->size_)
				throw OutOfIndexException();
			return this->array_[index];
		};		

		class InvalidArraySizeException : public std::exception 
		{
			virtual const char* what() const throw()
			{
				return "Can't create array, because size is to small";
			}
		};

		class OutOfIndexException : public std::exception 
		{
			virtual const char* what() const throw()
			{
				return "Out of array's Index";
			}
		};
};


#endif