#pragma once

#include <utility>

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

    My_unique_ptr &operator= (const My_unique_ptr &new_ptr) = delete;

    My_unique_ptr &operator= (My_unique_ptr &&other)
    {
        ptr = std::exchange(other.ptr, nullptr);
        return *this;
    }

    T& operator*() const
    {
        return *(this->get());
    }

    T* operator->() const
    {
        return this->get();
    }

    bool operator== (const My_unique_ptr<T> &other) const
    {
        return ptr == other.ptr;
    }

    T* get() const
    {
        return ptr;
    }

    T* release()
    {
        return std::exchange(ptr, nullptr);
    }

    void reset(T *other)
    {
        T *temp_ptr = std::exchange(ptr, other);

        if(temp_ptr)
            delete temp_ptr;
    }

private:

    T *ptr;
};