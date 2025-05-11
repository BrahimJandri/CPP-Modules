#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <climits>

BitcoinExchange::BitcoinExchange(const std::string &dbFile)
{
    loadDatabase(dbFile);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string &dbFile)
{
    std::ifstream file(dbFile.c_str());
    if (!file)
        throw std::runtime_error("Error: could not open database file.");

    std::string line;
    getline(file, line); // skip header

    while (getline(file, line))
    {
        std::istringstream ss(line);
        std::string date, priceStr;
        if (getline(ss, date, ',') && getline(ss, priceStr))
        {
            float price = std::atof(priceStr.c_str());
            _exchangeRates[date] = price;
        }
    }
}
bool BitcoinExchange::isValidDate(const std::string &date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    int m = std::atoi(date.substr(5, 2).c_str());
    int d = std::atoi(date.substr(8, 2).c_str());

    if (m < 1 || m > 12 || d < 1 || d > 31)
        return false;

    return true;
}


bool BitcoinExchange::isValidValue(const std::string &valueStr, float &value)
{
    std::istringstream ss(valueStr);
    ss >> value;

    if (ss.fail() || !ss.eof() || value < 0)
        return false;

    if (value > 1000)
        throw std::runtime_error("Error: too large a number.");

    return true;
}

void BitcoinExchange::processInputFile(const std::string &inputFile)
{
    std::ifstream file(inputFile.c_str());
    if (!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    getline(file, line); // skip header

    while (getline(file, line))
    {
        size_t delim = line.find('|');
        if (delim == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, delim);
        std::string valueStr = line.substr(delim + 1);
        date.erase(date.find_last_not_of(" \t\r\n") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" \t\r\n"));

        float value;
        if (!isValidDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        try
        {
            if (!isValidValue(valueStr, value))
            {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
        }
        catch (const std::runtime_error &e)
        {
            std::cerr << e.what() << std::endl;
            continue;
        }

        std::map<std::string, float>::const_iterator it = _exchangeRates.lower_bound(date);
        if (it == _exchangeRates.end() || it->first != date)
        {
            if (it == _exchangeRates.begin())
            {
                std::cerr << "Error: no exchange rate available before " << date << std::endl;
                continue;
            }
            --it;
        }

        float rate = it->second;
        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}
