#include"Span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& other) : _vect(other._vect), _N(other._N) {}

Span& Span::operator=(const Span& other)
{
	_N = other._N;
	_vect = other._vect;
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int n)
{
	if (_vect.size() == _N)
		throw Span::FullSpanException();
	_vect.push_back(n);
}

int		Span::shortestSpan(void)
{
	if (_N == 0 || _N == 1)
		throw Span::NoSpanException();
	else if (_N == 2)
		return (std::abs(*_vect.begin() - *(_vect.begin() + 1)));
	else
	{
		std::sort(_vect.begin(), _vect.end());

		int shortest_span = std::abs(*_vect.begin() - *(_vect.begin() + 1));
		for (std::vector<int>::iterator it = _vect.begin(); it != (_vect.end() - 1); it++)
		{
			int current_span = std::abs(*it - *(it + 1));
			if (current_span < shortest_span)
				shortest_span = current_span;
		}
		if (shortest_span == 0)
			throw Span::NoSpanException();
		return shortest_span;
	}
}

int		Span::longestSpan(void)
{
	if (_N == 0 || _N == 1)
		throw Span::NoSpanException();
	else if (_N == 2)
		return (std::abs(*_vect.begin() - *(_vect.begin() + 1)));
	else
	{
		std::sort(_vect.begin(), _vect.end());

		int span = std::abs(*(_vect.end() - 1) - *_vect.begin());
		if (span == 0)
			throw Span::NoSpanException();
		return span;
	}
}

void	Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}