#include <stdexcept>
#include <iostream>

#include "My_unique_ptr.hpp"

void test_create_object_my_unique_ptr()
{
    My_unique_ptr ptr;
}

int main()
{
    try
    {
        test_create_object_my_unique_ptr();
    }

    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}