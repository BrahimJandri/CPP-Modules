#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array
{
private:
    T *data;
    unsigned int _size;

public:
    Array() : data(NULL), _size(0) {}

    Array(unsigned int n) : data(new T[n]()), _size(n) {}

    Array(const Array &other) : data(NULL), _size(0)
    {
        *this = other;
    }

    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] data;
            _size = other._size;
            data = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                data[i] = other.data[i];
        }
        return *this;
    }

    ~Array()
    {
        delete[] data;
    }

    T &operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    unsigned int size() const
    {
        return _size;
    }
};

#endif
