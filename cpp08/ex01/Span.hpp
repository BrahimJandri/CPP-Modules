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
    ~Span();

    void addNumber(unsigned int num);

    int shortestSpan();

    int longestSpan();
};
