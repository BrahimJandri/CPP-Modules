#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
int easyfind(T &data, int target)
{
    for (size_t i = 0; i < data.size(); ++i)
    {
        if (data[i] == target)
        {
            return static_cast<int>(i);
        }
    }
    throw std::runtime_error("Value not found in vector.");
}