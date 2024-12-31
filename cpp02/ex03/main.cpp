#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0);
    Point b(0, 10);
    Point c(10, 0);

    Point inside(1, 1);
    Point outside(11, 11);

    std::cout << bsp(a, b, c, inside) << " : Point inside" << std::endl;   // Should output 1 (true)
    std::cout << bsp(a, b, c, outside) <<" : Point outside" << std::endl; // Should output 0 (false)

    return 0;
}
