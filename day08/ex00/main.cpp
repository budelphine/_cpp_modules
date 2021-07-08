#include "easyfind.hpp"
 
int main()
{
	std::cout << "Welcome to ex00 - Easy finds" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << VIOLET_COLOR << "* Create and fill vector *" << END_COLOR << std::endl;
	std::vector<int> myVector;
	for (int count = 0; count < 6; count++)
		myVector.push_back(count);
	std::cout << std::endl;

	std::cout << "* Print vector by iterator *" << std::endl;
	std::vector<int>::iterator it;
	it = myVector.begin();
	for (; it != myVector.end(); it++)
		std::cout << "vector[" << *it << "] = " << *it << std::endl;
	std::cout << std::endl;

	std::cout << "* Find easyfind *" << std::endl;
	it = easyfind(myVector, 5);
	std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "* Replace easyfind *" << std::endl;
	*it = 42;
	std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "* Try easyfind again with old_value *" << std::endl;
	it = easyfind(myVector, 5);
	std::cout << *it << std::endl;
	std::cout << std::endl;
	
	std::cout << "* Try easyfind again with new_value *" << std::endl;
	it = easyfind(myVector, 42);
	std::cout << *it << std::endl;
	std::cout << std::endl;


	std::cout << "---------------------------------------------" << std::endl;


	std::cout << VIOLET_COLOR << "* Create and fill list *" << END_COLOR << std::endl;
	std::list<int> li;
	for (int nCount = 0; nCount < 6; nCount++)
		li.push_back(nCount);
	std::cout << std::endl;

	std::cout << "* Print list by iterator *" << std::endl;
	std::list<int>::iterator listIt = li.begin();
	for (; listIt != li.end(); listIt++)
		std::cout << "list[" << *listIt << "] = " << *listIt << std::endl;
	std::cout << std::endl;

	std::cout << "* Find easyfind *" << std::endl;
	listIt = easyfind(li, 5);
	std::cout << *listIt << std::endl;
	std::cout << std::endl;

	std::cout << "* Replace easyfind *" << std::endl;
	*listIt = 42;
	std::cout << *listIt << std::endl;
	std::cout << std::endl;

	std::cout << "* Try easyfind again with old_value *" << std::endl;
	listIt = easyfind(li, 5);
	std::cout << *listIt << std::endl;
	std::cout << std::endl;
	
	std::cout << "* Try easyfind again with new_value *" << std::endl;
	listIt = easyfind(li, 42);
	std::cout << *listIt << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;

	return 0;
}