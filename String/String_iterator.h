#pragma once
using namespace std;
#include <iterator>
class String_iterator:public iterator<forward_iterator_tag,char>
{
public:
    explicit String_iterator():ptr(nullptr){}
    explicit String_iterator(char * data):ptr(data){}
    ~String_iterator() {}
    char& operator*(){
        return *ptr;
    }

    String_iterator&& operator=(const String_iterator& iter){
        ptr=iter.ptr;
        return move(*this);
    }
    
    bool operator!=(const String_iterator& iter){
        return ptr!=iter.ptr;
    }
    
    bool operator==(const String_iterator& iter){
        return ptr==iter.ptr;
    }

    String_iterator& operator++(){
        ++ptr;
        return *this;
    }
    String_iterator& operator--(){
        --ptr;
        return *this;
    }
    String_iterator operator++(int){
        String_iterator tmp=*this;
        ++ptr;
        return tmp;
    }
    String_iterator operator--(int){
        String_iterator tmp=*this;
        --ptr;
        return tmp;
    }
    size_t operator-(const String_iterator& iter){
        size_t i=0;
        while(*this!=iter){
            i++;
            (*this)--;
        }
        return i;
    }
    String_iterator operator+(size_t i){
        return String_iterator(ptr+i);
    }
private:
    char* ptr;
};

