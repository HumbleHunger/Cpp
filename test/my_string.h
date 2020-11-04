/*************************************************************************
	> File Name: my_string.h
	> Author: 
	> Mail: 
	> Created Time: 2020年11月04日 星期三 15时46分49秒
 ************************************************************************/

#ifndef _MY_STRING_H
#define _MY_STRING_H
#include<memory>
#include<cstring>
#include<new>
using namespace std;
class String {
public:
    String():elements(nullptr),end(nullptr){}
    String(const char *s){
        auto newdata=alloc.allocate(strlen(s));
        auto iter=newdata;
        for(int i=0;i<strlen(s);++i){
            alloc.construct(iter++,s[i]);
        }
        elements=newdata;
        end=iter;
    }
    String(const String &s){
        
    }
    size_t size() const {return end-elements;}
    String& operator=(const String& s);
private:
    allocator<char> alloc;
    char *elements;
    char *end;
};

#endif
