#include "Span.hpp"
#include <algorithm>
#include <limits>

// ---------------- Orthodox Canonical Form ----------------

Span::Span(unsigned int n) : _size(n), _numbers()
{
}

Span::Span(const Span& other) : _size(other._size), _numbers(other._numbers)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;
		_numbers = other._numbers;
	}
	return *this;
}

Span::~Span()
{
}

// ---------------- Core functionality ----------------

void Span::addNumber(int number)
{
	if (_numbers.size() >= _size)
		throw FullException();
	_numbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw NoSpanException();

	// Work on a copy to preserve original order
	std::vector<int> tmp(_numbers);
	std::sort(tmp.begin(), tmp.end());

	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 1; i < tmp.size(); ++i)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw NoSpanException();

	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());

	return maxVal - minVal;
}

// ---------------- Exceptions ----------------

const char* Span::FullException::what() const throw()
{
	return "Span is full";
}

const char* Span::NoSpanException::what() const throw()
{
	return "Not enough numbers to find a span";
}
