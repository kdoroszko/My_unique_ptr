#include <stdexcept>
#include <iostream>

#include "My_unique_ptr.hpp"

void test_my_unique_ptr_stores_pointer_to_any_type_of_data()
{
    int number = 1;
    My_unique_ptr<int> ptr_to_int(&number);

    double number2 = 2;
    My_unique_ptr<double> ptr_to_double(&number2);
}

int main()
{
    try
    {
        test_my_unique_ptr_stores_pointer_to_any_type_of_data();
    }

    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}