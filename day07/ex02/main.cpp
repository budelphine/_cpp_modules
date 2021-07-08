#include "Array.hpp"

#define ARRAY_SIZE 7

int main()
{
	std::cout << "Welcome to ex02 - Array" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	// empty array
	// out of range exception
	Array<int> emptyArray;
	std::cout << VIOLET_COLOR << "Create empty array:" << END_COLOR << std::endl;
	std::cout << "Array size = " << emptyArray.getSize() << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "Try empty array" << std::endl;
		emptyArray[100] = 23;
	} catch (std::exception	const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	// sized array
	std::cout << "---------------------------------------------" << std::endl;
	Array<int> sizeArray(ARRAY_SIZE);
	std::cout << VIOLET_COLOR << "Create array with size ARRAY_SIZE:" << END_COLOR << std::endl;
	std::cout << "Array size = " << sizeArray.getSize() << std::endl;
	std::cout << std::endl;
	std::cout << "Fill array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		sizeArray[i] = i * 2;
		std::cout << "Array[" << i << "] = " << sizeArray[i] << std::endl;
	}
	std::cout << std::endl;
	
	// copy array
	std::cout << "---------------------------------------------" << std::endl;
	Array<int> copyArray(sizeArray);
	std::cout << VIOLET_COLOR << "Create copy array with size ARRAY_SIZE:" << END_COLOR << std::endl;
	std::cout << "Array size = " << copyArray.getSize() << std::endl;
	std::cout << std::endl;
	std::cout << "Copy array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		copyArray[i] = copyArray[i] * 10;
		std::cout << "Array[" << i << "] = " << copyArray[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Origin array" << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Array[" << i << "] = " << sizeArray[i] << std::endl;
	}
	std::cout << std::endl;

	// null array exception 
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "Create null array:" << END_COLOR << std::endl;
	try {
		Array<int> nullArray(0);
	} catch (std::exception	const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	return 0;
}