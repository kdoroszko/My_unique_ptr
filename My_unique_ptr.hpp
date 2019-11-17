#pragma once

template <typename T>
class My_unique_ptr
{
public:

    My_unique_ptr(T *new_ptr = nullptr) : ptr(new_ptr) {}

    My_unique_ptr(const My_unique_ptr &new_ptr) = delete;

    My_unique_ptr(My_unique_ptr &&other) : ptr(other.ptr)
    {
        other.ptr = nullptr;
    }

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