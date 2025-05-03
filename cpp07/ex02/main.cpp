#include "Array.hpp"

#define VAL_MAX 200
#define ALPHA 26
int main()
{
    Array<int> _numbers(VAL_MAX);
    int *arr = new int[VAL_MAX];
    Array<std::string> _alphabet(ALPHA);
    srand(time(NULL));
    for (int i = 0; i < VAL_MAX; i++)
    {
        const int val = rand();
        _numbers[i] = val;
        arr[i] = val;
    }
    Array<int> tmp = _numbers;
    Array<int> test(tmp);
    {
        int a = 65;
        for (size_t i = 0; i < 26; i++)
        {
            _alphabet[i] = a;
            a++;
        }
    }
    try
    {
        _numbers[VAL_MAX] = 10;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << _numbers[10] << std::endl;
        std::cout << tmp[10] << std::endl;
        std::cout << test[10] << std::endl;
        std::cout << arr[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        for (size_t i = 0; i < 26; i++)
        {
            std::cout << _alphabet[i] << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    delete[] arr;
    return 0;
}