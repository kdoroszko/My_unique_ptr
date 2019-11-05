#include <iostream>

#include "My_unique_ptr.hpp"

void test_add_dereference_operator()
{
    int x = 1;
    My_unique_ptr<int> ptr(new int);
    *ptr = x;
    std::cout << *ptr << '\n';
}

void test_add_comparison_operator_equal_to()
{
    My_unique_ptr<int> ptr(new int);
    if(ptr == ptr)
        std::cout << "ptr is equal to ptr\n";
}

int main()
{
    test_add_dereference_operator();
    test_add_comparison_operator_equal_to();

    return 0;
}