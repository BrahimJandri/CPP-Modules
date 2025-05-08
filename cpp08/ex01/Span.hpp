#pragma once

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>
#include <iostream>

class Span
{
private:
    std::vector<int> _span;
    unsigned int _maxSize;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    template <typename InputIterator>
    void addLotOfNum(InputIterator begin, InputIterator end)
    {
        while (begin != end)
        {
            if (_span.size() >= _maxSize)
                throw std::runtime_error("Span is full.");
            _span.push_back(*begin);
            ++begin;
        }
    }
};
