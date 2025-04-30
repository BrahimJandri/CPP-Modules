#include "iter.hpp"

void printInt(int x)
{
    std::cout << x << std::endl;
}
void printStr(std::string x)
{
    std::cout << x << std::endl;
}

int main()
{
    int arr[10] = {50, 10, 20, 30, 40, 1, 2, 3, 4, 5};
    std::string array[10] = {"A", "B", "C", "D", "E", "a", "b", "c", "d", "e"};
    iter(arr, 10, printInt);
    iter(array, 10, printStr);
    return 0;
}
