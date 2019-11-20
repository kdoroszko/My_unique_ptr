#include <iostream>
#include <utility>
#include <string>

#include "My_unique_ptr.hpp"

class Test_class
{
public:

    void dereference_test()
    {
        std::cout << "Dereference by arrow operator is accomplished\n";
    }
};

void test_add_move_constructor()
{
    My_unique_ptr<int> u_ptr(new int);
    *u_ptr = 8;

    My_unique_ptr<int> u_ptr2(std::move(u_ptr));
    std::cout << "*u_ptr2 = " << *u_ptr2 << '\n';

    if(u_ptr == nullptr)
        std::cout << "u_ptr now is nullptr\n";
}

void test_add_move_assignment_operator()
{
    My_unique_ptr<int> u_ptr3(new int);
    *u_ptr3 = 7;

    My_unique_ptr<int> u_ptr4;
    u_ptr4 = std::move(u_ptr3);
    std::cout << "*u_ptr4 = " << *u_ptr4 << '\n';

    if(u_ptr3 == nullptr)
        std::cout << "u_ptr3 now is nullptr\n";
}

void test_add_arrow_operator()
{
    My_unique_ptr<Test_class> ptr(new Test_class);
    ptr->dereference_test();
}

void test_take_pointer_to_the_managed_object_by_method_get()
{
    My_unique_ptr<std::string> ptr(new std::string("Method get() works"));
    std::string *ptr_to_string = ptr.get();
    std::cout << *ptr_to_string << '\n';
}

void test_release_the_ownership_of_the_managed_object()
{
    My_unique_ptr<int> ptr(new int(123));
    My_unique_ptr<int> ptr2(new int);

    ptr2 = ptr.release();

    std::cout << "ptr2 take object from ptr and now has value: " << *ptr2 << '\n';
    if(ptr == nullptr)
        std::cout << "ptr now is nullptr\n";
}

int main()
{
    test_add_move_constructor();
    test_add_move_assignment_operator();
    test_add_arrow_operator();
    test_take_pointer_to_the_managed_object_by_method_get();
    test_release_the_ownership_of_the_managed_object();

    return 0;
}