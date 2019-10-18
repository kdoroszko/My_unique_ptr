#include <stdexcept>
#include <iostream>

#include "My_unique_ptr.hpp"

void test_add_dereference_operator()
{
    int x = 1;
    My_unique_ptr<int> ptr(new int);
    *ptr = x;
    std::cout << *ptr << '\n';
}

int main()
{
    test_add_dereference_operator();

    return 0;
}