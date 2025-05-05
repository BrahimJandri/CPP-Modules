#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

void Span::addNumber(unsigned int num)
{
    if (_span.size() >= _maxSize)
        throw std::runtime_error("Span is full.");
    _span.push_back(num);
}

int Span::shortestSpan()
{
    if (_span.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span.");

    std::vector<int> sorted(_span);
    std::sort(sorted.begin(), sorted.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted.size() - 1; ++i)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_span.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span.");
    int min = *std::min_element(_span.begin(), _span.end());
    int max = *std::max_element(_span.begin(), _span.end());
    return max - min;
}

Span::~Span() {}