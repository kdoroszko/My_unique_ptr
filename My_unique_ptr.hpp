template <typename T>
class My_unique_ptr
{
public:

    My_unique_ptr(T *new_ptr) : ptr(new_ptr) {}

    ~My_unique_ptr()
    {
        delete ptr;
    }

private:

    T *ptr;
};