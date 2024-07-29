#ifndef Span_hpp
# define Span_hpp

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_vect;
		unsigned int		_N;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
	class FullSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return ("Span is full");
			}
	};

	class NoSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{
				return ("There is no Span");
			}
	};
};



#endif
