#include "MutantStack.hpp"

int main()
{
    std::cout << "--- Testing MutantStack ---" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();

    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating over stack elements:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "--- Comparison with std::list ---" << std::endl;
    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << "Top element of list: " << l.back() << std::endl;
    l.pop_back();
    std::cout << "Size after pop: " << l.size() << std::endl;

    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);

    std::cout << "Iterating over list elements:" << std::endl;
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}
