#pragma once
#include <iostream>
#include <cstddef>
using namespace std;
class String
{
    public:
    char *data;
    size_t data_size;
    
    String(const char * s=nullptr); String(int n,char c);
    ~String();
    
    String(const String & s);
    String& operator=(const String&);
    
    bool operator>(const String&);
    bool operator<(const String&);
    bool operator==(const String&);
    char & operator[](size_t index);
    const String operator+(const String&);
    
    friend istream & operator>>(istream &,String & s);
    friend ostream & operator<<(ostream &,String &);
    private:
    bool check(size_t index){
        if(index > data_size || index < 0)
            return false;
        else
            return true;
    }
};

