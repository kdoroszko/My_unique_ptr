#include <stdexcept>
#include <iostream>

#include "My_unique_ptr.hpp"

void test_my_unique_ptr_stores_pointer()
{
    int number = 1;
    My_unique_ptr ptr(&number);
}

int main()
{
    try
    {
        test_my_unique_ptr_stores_pointer();
    }

    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}