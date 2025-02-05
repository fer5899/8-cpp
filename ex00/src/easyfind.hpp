#ifndef EASYFIND_hpp
# define EASYFIND_hpp

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

class ValueNotFound : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Value not found";
	}
};

template<class Container>
typename Container::iterator	easyfind(Container& container, int value)
{
	if (*(container.end()) == value)
		return container.end();
	typename Container::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ValueNotFound();
	return it;
}



#endif