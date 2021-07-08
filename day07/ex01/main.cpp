#include "iter.hpp"

template <typename T>
void 	print(T data)
{
	static int	i = 0;
	std::cout << "array[" << i << "]: " << data << std::endl;
	i++;
}

int main()
{
	std::cout << "Welcome to ex01 - Iter" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	// test for int
	int numArr[5] = {7, 21, 42, 14, 0};
	std::cout << VIOLET_COLOR << "Test for int array:" << END_COLOR << std::endl;

	std::cout << BLUE_COLOR << "* iter *" << END_COLOR << std::endl;
	iter(numArr, 5, &print);


	// test for string
	std::string strArr[3] = { "I'm very tired", "and I want to sleep", "Good night."};

	std::cout << std::endl << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "Test for string array:" << END_COLOR << std::endl;

	std::cout << BLUE_COLOR << "* iter *" << END_COLOR << std::endl;
	iter(strArr, 3, &print);
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	return 0;
}