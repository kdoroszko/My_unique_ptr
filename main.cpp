#include <iostream>
#include <utility>

#include "My_unique_ptr.hpp"

void test_add_move_constructor()
{
    My_unique_ptr<int> u_ptr(new int);
    *u_ptr = 8;

    My_unique_ptr<int> u_ptr2(std::move(u_ptr));
    std::cout << "*u_ptr2 = " << *u_ptr2 << '\n';

    if(u_ptr == nullptr)
        std::cout << "u_ptr now is nullptr\n";
}

int main()
{
    test_add_move_constructor();

    return 0;
}