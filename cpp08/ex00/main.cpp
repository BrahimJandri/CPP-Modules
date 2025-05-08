#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1337);
    vec.push_back(42);
    vec.push_back(01);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
