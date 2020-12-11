#include <iostream>
#include "String.h"
#include <cstring>
using namespace std;
String::String(const char *s)
{
    if(s==nullptr){
        data_size=0;
        data=new char[1];
        data[0]=0;
    }
    else{
        data_size=strlen(s);
        data=new char[data_size+1];
        memset(data,0,data_size+1);
        strncpy(data,s,data_size);
    }
}
String::String(int n,char c)
{
    data_size=n;
    data=new char[data_size+1];
    memset(data,0,data_size+1);
    memset(data,c,n);
}
String::String(const String & s)
{
    data_size=s.data_size;
    data=new char[data_size+1];
    memset(data,0,data_size+1);
    strncpy(data,s.data,data_size);
}
String::~String()
{
    delete []data;
}
String& String::operator=(const String & s)
{
    auto news=new String(s);
    delete []data;
    data_size=news->data_size;
    data=new char[data_size+1];
    memset(data,0,data_size+1);
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
    cout << temp << endl;
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
















