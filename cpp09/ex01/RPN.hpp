#pragma once

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <cctype>

class RPN // Reverse Polish Notation
{
public:
    RPN();
    ~RPN();

    int evaluate(const std::string &expression);

private:
    std::stack<int> stack;

    bool isOperator(const std::string &token) const;
    int applyOperator(int a, int b, const std::string &op) const;
};