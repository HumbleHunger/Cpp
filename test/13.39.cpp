/*************************************************************************
	> File Name: 13.39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月02日 星期一 21时11分21秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<new>
using namespace std;
class StrVec {
public:
    StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    ~StrVec(){free();}
    void push_back(const string&);
    size_t size(){return first_free-elements;}
    size_t capacity(){return cap-elements;}
    string *begin() const {return elements;}
    string *end() const {return first_free;}

private:
    static allocator<string> alloc;
    void chk_n_alloc(){
        if(size()==capacity()){
            reallocate();
        }
    }
    pair<string*,string*> alloc_n_copy(const string*,const string*);
    void free();
    void reallocate();
    string *elements;//首元素指针
    string *first_free;//第一个空位
    string *cap;//空间尾后指针
};
StrVec& StrVec::operator=(const StrVec& s){
    auto data=alloc_n_copy(s.begin(),s.end());
    free();
    elements=data.first;
    first_free=cap=data.second;
    return *this;
}
void StrVec::reallocate()
{
    auto newcapacity=size() ? 2*size():1;
    auto newdata=alloc.allocate(newcapacity);
    auto dest=newdata;
    auto elem=elements;
    for(size_t i=0;i!=size();++i){
        alloc.construct(dest++,move(*elem++));
    }
    free();
    elements=newdata;
    first_free=dest;
    cap=elements+newcapacity;
}
void StrVec::push_back(const string& s)
{
    chk_n_alloc();
    alloc.construct(first_free++,s);
}
pair<string*,string*> StrVec::alloc_n_copy(const string *b,const string *e)
{
    auto data=alloc.allocate(e-b);
    return {data,uninitialized_copy(b,e,data)};
}
void StrVec::free()
{
    if(elements){
        for(auto p=elements;p!=first_free;){
            alloc.destroy(p++);
        }
        alloc.deallocate(elements,cap-elements);
    }
}
StrVec::StrVec(const StrVec &sv)
{
    auto newdata=alloc_n_copy(sv.begin(),sv.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
}

