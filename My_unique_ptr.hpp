template <typename T>
class My_unique_ptr
{
public:

    My_unique_ptr(T *new_ptr) : ptr(new_ptr) {}

private:

    T *ptr;
};