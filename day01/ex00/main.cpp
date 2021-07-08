#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	ponyOnTheHeap;

	ponyOnTheHeap.setName("Pony on the Heap");
	ponyOnTheHeap.voiceIntroduce();
	std::cout << "Clean stack with " << ponyOnTheHeap.getName() << " - automatically" << std::endl;
}

void	ponyOnTheStack(void)
{
	Pony	*ponyOnTheStack = new Pony("Pony on the Stack");

	ponyOnTheStack->voiceIntroduce();
	std::cout << "Get back in the Heap " << ponyOnTheStack->getName() << " - by hands" << std::endl;
	delete ponyOnTheStack;
	ponyOnTheStack = NULL;
}

int		main(void) 
{
	std::cout << "Welcome to ex00 - Heap of quadrupeds" << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return 0;
}
