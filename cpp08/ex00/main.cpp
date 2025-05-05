#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(25);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(45);
    vec.push_back(50);
    vec.push_back(58);
    int target = 405;
    try
    {
        int index = easyfind(vec, target);
        std::cout << "Found " << target << " at index: " << index << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}