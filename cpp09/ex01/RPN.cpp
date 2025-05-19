#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}

bool RPN::isOperator(const std::string &token) const
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::applyOperator(int a, int b, const std::string &op) const
{
    if (op == "+")
        return a + b;
    if (op == "-")
        return a - b;
    if (op == "*")
        return a * b;
    if (op == "/")
    {
        if (b == 0)
            throw std::runtime_error("Error: Division by zero");
        return a / b;
    }
    throw std::runtime_error("Error: Invalid operator");
}

int RPN::evaluate(const std::string &expression)
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (token.size() == 1 && std::isdigit(token[0]))
        {
            stack.push(token[0] - '0');
        }
        else if (isOperator(token))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error");

            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            int result = applyOperator(a, b, token);
            stack.push(result);
        }
        else
        {
            throw std::runtime_error("Error");
        }
    }

    if (stack.size() != 1)
        throw std::runtime_error("Error");

    return stack.top();
}
