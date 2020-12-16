#include <iostream>
#include "String.h"
#include <cstring>
using namespace std;
#define SIZE 32
String::String(const char *s)
{
    if(s==nullptr){
        data_size=0;
        Capacity=SIZE;
        data=new char[SIZE];
        memset(data,0,SIZE);
    }
    else{
        data_size=strlen(s);
        Capacity=(data_size/SIZE+1)*SIZE;
        data=new char[Capacity];
        memset(data,0,Capacity);
        strncpy(data,s,data_size);
    }
}
String::String(size_t n,char c)
{
    char s[n+1];
    memset(s,c,n);
    s[n]=0;
    String((char *)s);
}
String::String(const String & s)
{
    data_size=s.data_size;
    Capacity=s.Capacity;
    data=new char[Capacity];
    memset(data,0,Capacity);
    strncpy(data,s.data,data_size);
}
//template <typename Iter>
/*String::String(Iter begin,Iter end)
{
    data_size=end-begin;
    Capacity=(data_size/SIZE+1)*SIZE;
    data=new char[Capacity];
    memset(data,0,Capacity);
    for(Iter iter=begin;iter!=end;++iter){
        push_back(*iter);
    }
}*/
String::~String()
{
    delete []data;
}
String& String::operator=(const String & s)
{
    auto news=new String(s);
    delete []data;
    data_size=news->data_size;
    Capacity=news->Capacity;
    data=new char[Capacity];
    memset(data,0,Capacity);
    strncpy(data,news->data,data_size);
    return *this;
}
bool String::operator<(const String & s)
{
    if(strcmp(this->data,s.data)<0)
        return true;
    else    
        return false;
}
bool String::operator>(const String & s)
{
    if(strcmp(this->data,s.data)>0)
        return true;
    else    
        return false;
}
bool String::operator==(const String & s)
{
    if(strcmp(this->data,s.data)==0)
        return true;
    else    
        return false;
}
char & String::operator[](size_t index)
{
    if(check(index))
        return *(this->data+index);
    else
        throw out_of_range("index is error\n");
}
istream & operator>>(istream & in,String & s)
{
    in >> s.data;
    return in;
}
ostream & operator<<(ostream & out,const String & s)
{
    out << s.data;
    return out;
}
istream & getline(istream & in,String & s){
    in >> s;
    return in;
}
String operator+(const String & s1,const String & s2)
{
    char temp[s1.data_size+s2.data_size+1];
    memset(temp,0,sizeof(temp));
    strncpy(temp,s1.data,s1.data_size);
    strcat(temp,s2.data);
    return String(temp);
}
String operator+(const String & s1,const char * s2)
{
    return String(s1+String(s2));
}
bool String::operator!=(const String & s)
{
    if(*this==s)
        return false;
    else    
        return true;
}
bool String::operator<=(const String & s)
{
    if(*this>s)
        return false;
    else    
        return true;
}
bool String::operator>=(const String & s)
{
    if(*this<s)
        return false;
    else    
        return true;
}
void String::push_back(const char *s)
{
    *this=String(*this+s);
}
void String::push_back(const char c)
{
    *this=String(*this+&c);
}
String & String::insert(size_t pos1, const String &s)
{
    if(check(pos1)){
        char* end=data+pos1+1;
        char begin[pos1+2];
        memset(begin,0,pos1+2);
        strncpy(begin,data,pos1+1);
        if(*end){
            *this=begin+s+end;
        }
        else{
            *this=*this+s;
        }
    }
    return *this;
}
String &String::insert(size_t pos1, const char *s)
{
    if(check(pos1)){
        char* end=data+pos1+1;
        char begin[pos1+2];
        memset(begin,0,pos1+2);
        strncpy(begin,data,pos1+1);
        if(*end){
            *this=String(begin)+s+end;
        }
        else{
            *this=*this+s;
        }
    }
    return *this;
}














