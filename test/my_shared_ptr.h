#pragma once
template<typename T>
class my_shared_ptr
{
public:
    my_shared_ptr() {}
    ~my_shared_ptr() {}

private:
    static size_t _count;
    T* ptr;

};

