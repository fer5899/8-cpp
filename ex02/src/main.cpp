#include"MutantStack.hpp"

int main()
{
	MutantStack<int> mutant;

	std::cout << "--- Test member functions of stack work in MutantStack ---" << std::endl;
	std::cout << "Empty: " << mutant.empty() << std::endl;
	std::cout << "Size: " << mutant.size() << std::endl;

	std::cout << "--- Test push() and top() ---" << std::endl;
	mutant.push(1);
	std::cout << "Top: " << mutant.top() << std::endl;
	mutant.push(2);
	std::cout << "Top: " << mutant.top() << std::endl;
	mutant.push(3);
	std::cout << "Top: " << mutant.top() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test pop() ---" << std::endl;
	mutant.pop();
	std::cout << "Top: " << mutant.top() << std::endl;
	mutant.pop();
	std::cout << "Top: " << mutant.top() << std::endl;
	mutant.pop();
	std::cout << "Empty: " << mutant.empty() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test iterator ---" << std::endl;
	mutant.push(1);
	mutant.push(2);
	mutant.push(3);
	mutant.push(4);
	mutant.push(5);
	mutant.push(6);
	mutant.push(7);
	mutant.push(8);
	mutant.push(9);
	mutant.push(10);

	for(MutantStack<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
	{
		std::cout << *it << std::endl;
	}	

	return 0;
}