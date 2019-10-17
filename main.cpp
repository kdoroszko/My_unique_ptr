#include <stdexcept>
#include <iostream>

#include "My_unique_ptr.hpp"

void no_test_add_destructor()
{
    My_unique_ptr<int> (new int);
}

int main()
{
    no_test_add_destructor();

    return 0;
}