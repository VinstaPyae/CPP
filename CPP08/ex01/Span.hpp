#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _numbers;
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;

        template <typename Iterator>
        void addNumber(Iterator begin, Iterator end)
        {
            size_t distance = std::distance(begin, end);

            if (_numbers.size() + distance > _size)
                throw FullException();

            _numbers.insert(_numbers.end(), begin, end);
        }

        class FullException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif