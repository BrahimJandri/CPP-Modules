#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cmath>
#include <stdexcept>

class Span
{
private:
    std::vector<int> _span;
    unsigned int _maxSize;

public:
    Span(unsigned int N);
    void addNumber(unsigned int num);
    int shortestSpan();
    int longestSpan();

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
    };

    ~Span();
};
