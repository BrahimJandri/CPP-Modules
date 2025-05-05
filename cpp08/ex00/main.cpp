#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(12);
    vec.push_back(6);
    vec.push_back(42);
    vec.push_back(1337);
    int target = 1337;
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