#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <map>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

class Span
{
	private:
		std::vector<int>	value_;
		unsigned int		size_;
	
	public:
		Span();
		Span(unsigned int size);
		Span(Span const &copy);
		Span&	operator= (Span const &other);

		virtual ~Span();
		
		unsigned int	getSize()const;
		void			printValue()const;

		void			addNumber(int value);
		void			addNumber(int value, int range);

		int				shortestSpan();
		int				longestSpan();

		class OutOfIndexException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class ToFewElementException : public std::exception 
		{
			virtual const char* what() const throw();
		};

		class ArrayIsFullException : public std::exception 
		{
			virtual const char* what() const throw();
		};
};

#endif
