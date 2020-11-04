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
#include<memory>
using namespace std;
class StrVec {
public:
    StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(initializer_list<string> il){
        auto newdata = alloc_n_copy(il.begin(),il.end());
	    elements = newdata.first;
	    first_free = cap = newdata.second;
    }
    StrVec(const StrVec&);
    StrVec(StrVec&&) noexcept;
    StrVec& operator=(const StrVec&);
    ~StrVec(){free();}
    void push_back(const string&);
    size_t size(){return first_free-elements;}
    size_t capacity(){return cap-elements;}
    string *begin() const {return elements;}
    string *end() const {return first_free;}
    void reserve(size_t n);
    void resize(int n);
    void print();
    void reset();
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
allocator<string> StrVec::alloc;
void StrVec::reset()
{
    elements=first_free=cap=nullptr;
}
StrVec::StrVec(StrVec&& s) noexcept
{
    auto newdata=alloc_n_copy(s.begin(),s.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
    //s.reset();
    s.elements=s.first_free=s.cap=nullptr;
    
}
void StrVec::resize(int n)
{
    if(n > size()){
        for(size_t i=0;i<n-size();i++){
            push_back("");
        }
    }
    else{
        for(size_t i=1;i<=size()-n;i++){
            auto iter=first_free-i;
            alloc.destroy(iter);
        }
    }
    first_free=elements+n;
}
void StrVec::reserve(size_t n)
{
    if(n > cap-elements){
        auto newdata=alloc.allocate(n);
        auto dest=newdata;
        auto elem=elements;
        for(size_t i=0;i<size();++i){
            alloc.construct(dest++,move(*elem++));
        }
        free();
        elements=newdata;
        first_free=dest;
        cap=elements+n;
    }
}
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
void StrVec::print()
{
    auto iter=elements;
    while(iter!=first_free){
        cout << *iter++ << endl;
    }
}
int main()
{
    StrVec a;
    string word;
    a.reserve(10);
    cout << a.size() << endl;
    while(cin >> word){
        a.push_back(word);
    }
    a.print();
    cout << a.size() << endl;
    a.resize(5);
    a.print();
    cout << a.size() << endl;
    return 0;
}
