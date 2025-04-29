#include "Base.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    int random = rand() % 3;

    switch (random)
    {
    case 0:
        std::cout << "Generated: A" << std::endl;
        return new A();
    case 1:
        std::cout << "Generated: B" << std::endl;
        return new B();
    default:
        std::cout << "Generated: C" << std::endl;
        return new C();
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Pointer Type: A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Pointer Type: B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Pointer Type: C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Ref Type A" << std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "Ref Type B" << std::endl;
        }
        catch (std::exception &e)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "Ref Type C" << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "Ref Unknown Type" << std::endl;
            }
        }
    }
}
