#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

template <typename T>
void 	iter(T *addr, size_t length, void (*f)(T const &data)) {
	for (size_t i = 0; i < length; i++)
		f(addr[i]);
}

#endif