#ifndef MutantStack_hpp
# define MutantStack_hpp

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		
		// Expose the iterator of the underlying container of the stack
		typedef typename std::stack<T>::container_type::iterator 	iterator;

		MutantStack(void) {}

		MutantStack(const MutantStack<T>& other)
		{
			*this = other;
		}

		MutantStack<T>& operator=(const MutantStack<T>& other)
		{
			*this = other;
			return (*this);
		}

		virtual ~MutantStack(void) {}
		
		iterator begin(void)
		{
			// c is the container of the stack (deque by default)
			return (this->c.begin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
};


#endif
