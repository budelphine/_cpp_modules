#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

template <typename T>
T &max(T &a, T &b)
{
	return (a > b) ? a : b;
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
void swap(T &a, T &b)
{
	T tmp(a);
	a = b;
	b = tmp;
}

#endif