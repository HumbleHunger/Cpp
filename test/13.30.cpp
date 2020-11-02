/*************************************************************************
	> File Name: 13.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 22时12分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<new>
#include<vector>
#include<algorithm>
using namespace std;
class HasPtr {
public:
    friend void swap(HasPtr &,HasPtr &);
    HasPtr(const string &s = string("name")):ps(s),i(0){}
    HasPtr(const HasPtr &H):ps(H.ps),i(H.i){}
    HasPtr& operator=(HasPtr hp);
    void print(){
        cout << ps << endl;
    }
    ~HasPtr(){}
    bool operator<(const HasPtr& hp);
private:
    string ps;
    int i=0;
};
HasPtr &HasPtr::operator=(HasPtr hp)
{
    swap(*this,hp);
    return *this;
}
inline bool HasPtr::operator<(const HasPtr &hp)
{
    if(this->ps < hp.ps){
        return true;
    }
    else{
        return false;
    }
}
inline void swap(HasPtr &h1,HasPtr &h2)
{
    swap(h1.ps,h2.ps);
    swap(h1.i,h2.i);
    cout << h1.ps << endl ;
    cout << h2.ps << endl;
    cout << "swap" << endl;
}
int main()
{
/*  HasPtr a;
    HasPtr b("sad");
    a=b;*/
    vector<HasPtr> v(10);
    sort(v.begin(),v.end());
    int i=1;
    for(auto &a : v){
        a.print();
        cout << i++ << endl;
    }
    return 0;
    
}
