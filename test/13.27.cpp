/*************************************************************************
	> File Name: 13.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 22时12分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<new>
using namespace std;
class HasPtr {
public:
    HasPtr(const string &s = string()):ps(new string("asd")),num(new int(1)){}
    HasPtr(const HasPtr &H):ps(H.ps),i(H.i),num(H.num){++*num;}
    HasPtr& operator=(const HasPtr &hp);
    ~HasPtr(){}

private:
    string *ps;
    int i=0;
    int* num;
};
HasPtr &HasPtr::operator=(const HasPtr &hp)
{
    ++*hp.num;
    if(--*num==0){
        delete ps;
        delete num;
    }
    ps=hp.ps;
    i=hp.i;
    num=hp.num;
    return *this;
}
int main()
{
    
}
