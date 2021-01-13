#include <iostream>
#include <algorithm>
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
template <typename Iter>
String::String(Iter begin,Iter end)
{
    data_size=end-begin;
    Capacity=(data_size/SIZE+1)*SIZE;
    data=new char[Capacity];
    memset(data,0,Capacity);
    for(Iter iter=begin;iter!=end;++iter){
        push_back(*iter);
    }
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
void String::push_back(char c)
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
String &String::remove(const int n)
{
   char beg[data_size];
   memset(beg,0,data_size);
   strncpy(beg,data,n);
   strncpy(beg+n,data+n+1,data_size-n-1);
   *this=String(beg);
    return *this;
}
char &String::at(size_t n)
{
    return *(data+n);
}
String &String::replace(const char & ch,const char & ch1)
{
    iterator iter;
    while(1){
        iter=::find(begin(),end(),ch);
        if(iter!=end())
            *iter=ch1;
        else
            break;
    }
    return *this;
}
String String::substr(int i,int j)
{
    char s[j-i+2];
    memset(s,0,j-i+2);
    strncpy(s,data+i,j-i+1);
    return String(s);
}
/*String String::substr(iterator b,iterator e)
{
    size_t i=b-begin();
    size_t j=e-begin();
    return substr(i,j);
}*/
String String::substr(iterator b,iterator e)
{
    char s[e-b+1];
    memset(s,0,e-b+1);
    auto iter=b;
    cout << *iter << endl;
    for(int i=0;iter!=e;++iter){
        s[i++]=*iter;
        cout << s[i] << endl;
    }
    return String(s);
}
void String::copy(char* s,int n,int pos)
{
    strncpy(s,data+pos,n);
}
String& String::erase(size_type pos,size_type n)
{
    char s1[pos+1];
    memset(s1,0,pos+2);
    strncpy(s1,data,pos);
    char s2[data_size-pos-n];
    memset(s2,0,sizeof(s2));
    strcpy(s2,data+pos+n);
    *this=String(s1)+s2;
    return *this;
}























