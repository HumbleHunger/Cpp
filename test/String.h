#pragma once
#include <iostream>
#include <cstddef>
using namespace std;
class String
{
    public:
    String(const char * s=nullptr); String(int n,char c);
    ~String();
    
    String(const String & s);
    String& operator=(const String&);
    
    bool operator>(const String&);
    bool operator<(const String&);
    bool operator==(const String&);
    char & operator[](size_t index);
    bool operator!=(const String&);
    bool operator>=(const String&);
    bool operator<=(const String&);
    
    friend String operator+(const String &,const String &);
    friend String operator+(const String &,const char *);
    friend istream & operator>>(istream &,String & s);
    friend ostream & operator<<(ostream &,const String &);
    friend istream & getline(istream &,String &);


    bool empty(){
        if(data_size)
            return false;
        else
            return true;
    }
    size_t size(){
        return data_size;
    }
    char * begin(){
        return data;
    }
    char * end(){
        return data+data_size;
    }
    private:
    bool check(size_t index){
        if(index > data_size || index < 0)
            return false;
        else
            return true;
    }
    char *data;
    size_t data_size;
};

