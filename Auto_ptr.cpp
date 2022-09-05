#include <iostream>
#include "new_auto_ptr.h"

int main()
{
    new_auto_ptr<int> p1(new int(10));

    std::cout << *p1 << std::endl;
    std::cout << p1.get() << std::endl;

    *p1 = 20;
    std::cout << *p1 << std::endl;

    new_auto_ptr<int> p2;
    p2 = p1;
    std::cout << *p2 << std::endl;

    new_auto_ptr<int> p3(p2);
    std::cout << *p3 << std::endl;

    std::cout << p3.get() << std::endl;

    system("pause");

    return 0;
}
