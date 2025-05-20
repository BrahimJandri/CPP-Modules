#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>

class PmergeMe
{
public:
    PmergeMe();
    ~PmergeMe();

    static void parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq);
    static void sortAndMeasureTime(std::vector<int> &vec, std::deque<int> &deq);

private:
    static bool isNumber(const std::string &str);
    static void printContainer(const std::string &prefix, const std::vector<int> &container);
    static void printContainer(const std::string &prefix, const std::deque<int> &container);
    static void mergeInsertSort(std::vector<int> &container, int left, int right);
    static void mergeInsertSort(std::deque<int> &container, int left, int right);
};
