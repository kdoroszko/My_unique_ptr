#include <stdexcept>
#include <iostream>

void test_nothing(){}

int main()
{
    try
    {
        test_nothing();
    }

    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}