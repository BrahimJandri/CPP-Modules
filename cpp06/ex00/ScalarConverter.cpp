#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &literal)
{
    const char *conv = literal.c_str();
    while (conv && std::isspace(*conv))
        conv++;
    convertToChar(conv);
    convertToInt(conv);
    convertToFloat(conv);
    convertToDouble(conv);
}

void ScalarConverter::convertToChar(const char *conv)
{
    std::stringstream ss(conv);
    int val;

    if (ss >> val)
    {
        if (val >= 32 && val <= 126)
            std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
        else
            std::cerr << "char: Non displayable" << std::endl;
    }
    else
        std::cerr << "char: impossible" << std::endl;
}

void ScalarConverter::convertToInt(const char *conv)
{
    char *endPtr;
    errno = 0;
    long val = std::strtol(conv, &endPtr, 10);
    if (errno == ERANGE || endPtr == conv || val > INT_MAX || val < INT_MIN)
        std::cerr << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(val) << std::endl;
}

void ScalarConverter::convertToFloat(const char *conv)
{
    char *endPtr;
    errno = 0;
    float val = std::strtof(conv, &endPtr);

    if (endPtr == conv || errno == ERANGE)
    {
        std::cerr << "float: impossible" << std::endl;
        return;
    }
    if (std::isnan(val))
    {
        std::cerr << "float: nanf" << std::endl;
        return;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << val << "f" << std::endl;
}

void ScalarConverter::convertToDouble(const char *conv)
{
    char *endPtr;
    errno = 0;
    double val = std::strtod(conv, &endPtr);

    if (endPtr == conv || errno == ERANGE)
    {
        std::cerr << "double: impossible" << std::endl;
        return;
    }
    if (std::isnan(val))
    {
        std::cerr << "double: nan" << std::endl;
        return;
    }
    std::cout << "double: " << val << std::endl;
}