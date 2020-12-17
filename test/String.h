#pragma once
#include <iostream>
#include <cstddef>
#include <iterator>
#include "String_iterator.h"
using namespace std;
class String
{
    typedef String_iterator iterator;

    friend String operator+(const String &,const String &);
    
    friend String operator+(const String &,const char *);
    
    friend istream & operator>>(istream &,String & s);
    
    friend ostream & operator<<(ostream &,const String &);
    
    friend istream & getline(istream &,String &);
    
    public:

    String(const char * s=nullptr); 

    String(size_t n,char c);
    
    String(const String & s);
    
 //   template <typename Iter>
 //   String(Iter begin,Iter end);

    ~String();
    
    String& operator=(const String&);
    
    bool operator>(const String&);
    
    bool operator<(const String&);
    
    bool operator==(const String&);
    
    char & operator[](size_t index);
    
    bool operator!=(const String&);
    
    bool operator>=(const String&);
    
    bool operator<=(const String&);

    bool empty(){
        if(data_size)
            return false;
        else
            return true;
    }
    
    size_t size(){
        return data_size;
    }
    
    iterator begin(){
        return iterator(data);
    }
    
    iterator end(){
        return iterator(data+data_size);
    }
    
    void push_back(const char *s);
    
    void push_back(const char c);

    String &insert(size_t pos1, const String &str);

    String &insert(size_t pos1, const String &str, size_t pos2, size_t n);

    String &insert(size_t pos1, const char *s, size_t n);

    String &insert(size_t pos1, const char *s);                            

    String &insert(size_t pos1, size_t n, char c);

    String &insert(const int n,const char c);

    
    private:
    
    bool check(size_t index){
        if(index >= data_size || index < 0)
            throw out_of_range("out_of_range");
        else
            return true;
    }
    
    char *data;
    size_t data_size;
    size_t Capacity;
};
























