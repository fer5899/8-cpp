#ifndef EASYFIND_hpp
# define EASYFIND_hpp

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

class ElementNotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Element not found");
		}
};

template<typename Container>
int	easyfind(Container& container, int value)
{
	for (typename Container::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return (*it);
	}
	throw ElementNotFoundException();
}



#endif