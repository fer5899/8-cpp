#include "easyfind.hpp"

int main()
{
	std::cout << "--- Test easyfind with a vector of ints ---" << std::endl;
	std::vector<int> vect;

	for (int i = 0; i < 10; i++)
		vect.push_back(i);

	try
	{
		int n1 = easyfind(vect, 7);
		std::cout << "Found: " << n1 << std::endl;
		int n2 = easyfind(vect, 100);
		std::cout << "Found: " << n2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "--- Test easyfind with a list of ints ---" << std::endl;
	std::list<int> lst;

	for (int i = 0; i < 10; i++)
		lst.push_back(i);

	try
	{
		int n1 = easyfind(lst, 7);
		std::cout << "Found: " << n1 << std::endl;
		int n2 = easyfind(lst, 100);
		std::cout << "Found: " << n2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl;
}
