#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "___________________________________" << std::endl;
    try
    {
        std::vector<int> data;
        int a = 0;
        srand(time(NULL));
        for (int i = 0; i < 1000; ++i)
        {
            a = rand();
            data.push_back(a);
        }
        Span test(1000);
        test.addLotOfNum(data.begin(), data.end());
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}