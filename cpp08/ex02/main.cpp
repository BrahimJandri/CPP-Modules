#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "------------------mstack---------------" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    {

        std::cout << "------------------list---------------" << std::endl;

        std::list<int> l;
        l.push_back(5);
        l.push_back(17);

        std::list<int>::iterator it = --l.end();
        std::cout << *it << std::endl;
        l.pop_back();
        std::cout << l.size() << std::endl;
        l.push_back(3);
        l.push_back(5);
        l.push_back(737);
        std::list<int>::iterator it2 = l.begin();
        std::list<int>::iterator ite3 = l.end();
        ++it2;
        --it2;
        while (it2 != ite3)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
    }
    return 0;
}