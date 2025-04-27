#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits.h>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <cerrno>

class ScalarConverter
{
public:
    static void convert(const std::string &literal);
    static void convertToChar(const char *conv);
    static void convertToInt(const char *conv);
    static void convertToFloat(const char *conv);
    static void convertToDouble(const char *conv);
private:
    ScalarConverter();
    ~ScalarConverter();
};

#endif