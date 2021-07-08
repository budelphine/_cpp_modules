#include "mutantstack.hpp"

#define	RED_COLOR "\x1b[31;1m"
#define	GREEN_COLOR "\x1b[32;1m"
#define	BLUE_COLOR "\x1b[34;1m"
#define	VIOLET_COLOR "\x1b[35;1m"
#define GRAY_BACKGROND "\x1b[30;1m\x1b[47;1m"
#define	END_COLOR "\x1b[0m"

int main()
{
	std::cout << "Welcome to ex02 - Mutated abomination" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout << VIOLET_COLOR << "* my stack now *" << END_COLOR << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "top:  " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "stack[0] 5" << std::endl;
	std::cout << "stack[1] 17" << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "* delete top elem *" << END_COLOR << std::endl;
	std::cout << std::endl;

	mstack.pop();
	std::cout << "top:  " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "* push 4 element - (5), 3, 6, 737, 1 *" << END_COLOR << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(6);
	mstack.push(737);
	mstack.push(1);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "top:  " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << std::endl;
	for (int i = 0; it != ite; it++)
		std::cout << "stack [" << i++ << "] " << *it << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << VIOLET_COLOR << "* test copy *" << END_COLOR << std::endl;
	std::cout << std::endl;

	MutantStack<int> cstack(mstack);

	std::cout << "top:  " << cstack.top() << std::endl;
	std::cout << "size: " << cstack.size() << std::endl;
	std::cout << std::endl;

	MutantStack<int>::iterator cit = cstack.begin();
	MutantStack<int>::iterator cite = cstack.end();
	for (int i = 0; cit != cite; cit++)
		std::cout << "stack [" << i++ << "] " << *cit << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	return 0;
}