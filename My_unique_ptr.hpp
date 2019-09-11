class My_unique_ptr
{
public:

    My_unique_ptr(int *new_ptr) : ptr(new_ptr) {}

private:

    int *ptr;
};