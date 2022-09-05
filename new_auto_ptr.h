#pragma once
template<typename T>
class new_auto_ptr
{
public:
    new_auto_ptr(T* ptr = nullptr)
        :n_ptr(ptr)
    {}
    new_auto_ptr(new_auto_ptr& other)
        :n_ptr(other.release())
    {}

    ~new_auto_ptr()
    {
        delete n_ptr;
    }

    new_auto_ptr& operator=(new_auto_ptr& other)
    {
        reset(other.release());
        return *this;
    }

    T& operator*() const
    {
        return *n_ptr;
    }

    T* operator->() const
    {
        return n_ptr;
    }

    T* release()
    {
        T* tmp_ptr = n_ptr;
        n_ptr = nullptr;
        return tmp_ptr;
    }

    void reset(T* ptr = nullptr)
    {
        if (ptr != n_ptr)
        {
            delete n_ptr;
            n_ptr = ptr;
        }
    }

    T* get() const
    {
        return n_ptr;
    }

private:
    T* n_ptr;
};
