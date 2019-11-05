#pragma once

template <typename T>
class My_unique_ptr
{
public:

    My_unique_ptr(T *new_ptr = nullptr) : ptr(new_ptr) {}

    ~My_unique_ptr()
    {
        delete ptr;
    }

    T& operator*() const
    {
        return *ptr;
    }

    bool operator== (const My_unique_ptr<T> &other) const
    {
        return ptr == other.ptr;
    }

private:

    T *ptr;
};