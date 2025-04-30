#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    int _size;
    T *myArray;

public:
    Array();
    ~Array();
};
