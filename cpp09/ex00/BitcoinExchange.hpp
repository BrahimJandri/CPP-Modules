#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
public:
    BitcoinExchange(const std::string &dataFile);
    ~BitcoinExchange();

    void processInputFile(const std::string &inputFile);

private:
    std::map<std::string, float> _exchangeRates;

    void loadDatabase(const std::string &dataFile);
    bool isValidDate(const std::string &date);
    bool isValidValue(const std::string &valueStr, float &value);
};
