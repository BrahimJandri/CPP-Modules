#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>

void parseInput(int argc, char **argv, std::vector<int> &vec, std::deque<int> &deq);
void sortAndMeasureTime(std::vector<int> &vec, std::deque<int> &deq);

bool isNumber(const std::string &str);
void mergeInsertSort(std::vector<int> &container);
void mergeInsertSortDeq(std::deque<int> &container);
void insertSmallIntoBigVec(std::vector<int> &big, const std::vector<int> &small);
void insertSmallIntoBigDeq(std::deque<int> &big, const std::deque<int> &small);
