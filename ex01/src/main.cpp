#include"Span.hpp"

int main()
{
	Span sp1 = Span(5);
	Span sp2 = Span(100000);
	Span sp3 = Span();
	std::vector<int> v;

	for (int i = -50000; i < 50000; i++)
		v.push_back(i);

	std::cout << "-- Test small Span --" << std::endl;

	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << "The shortest span for s1 is: " << sp1.shortestSpan() << std::endl;
		std::cout << "The longest span for s1 is: " << sp1.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	std::cout << "-- Test big Span --" << std::endl;

	try
	{
		sp2.addMultipleNumbers(v.begin(), v.end());
		std::cout << "The shortest span for s2 is: " << sp2.shortestSpan() << std::endl;
		std::cout << "The longest span for s2 is: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "-- Test no Span exception --" << std::endl;

	try
	{
		sp3.shortestSpan();
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		sp3.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "-- Test full Span exception --" << std::endl;

	try
	{
		sp1.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	return 0;

}