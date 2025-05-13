#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
public:
    BitcoinExchange(const std::string &dbFile);
    ~BitcoinExchange();

    void processInputFile(const std::string &inputFile);

private:
    std::map<std::string, float> _exchangeRates;

    void loadDatabase(const std::string &dbFile);
    bool isValidDate(const std::string &date);
    bool isValidValue(const std::string &valueStr, float &value);
};
