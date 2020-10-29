/*************************************************************************
	> File Name: 13.5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 15时06分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
class HasPtr {
public:
    HasPtr(const string &s = string());
    HasPtr(const HasPtr &H);
    HasPtr& operator=(const HasPtr &hp);
    ~HasPtr(){}

private:
    string *ps;
    int i;
};
HasPtr &HasPtr::operator=(const HasPtr &hp)
{
    auto newps=new string(*hp.ps);
    delete ps;
    ps=new string(*hp.ps);
    i=hp.i;
    return *this;
}
HasPtr::HasPtr(const HasPtr &H)
{
    ps=new string(*H.ps);
    i=H.i;
}
int main()
{

}
