#pragma once

#include <iostream>

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter();

    void convert(std::string conv);
};
