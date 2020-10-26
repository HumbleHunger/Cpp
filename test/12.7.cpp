/*************************************************************************
	> File Name: 12.7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月26日 星期一 20时37分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
using namespace std;
shared_ptr<vector<int>> f()
{
    shared_ptr<vector<int>> p(new vector<int>);
    return p;
}
void f1(shared_ptr<vector<int>> p)
{
    int i=0;
    while(cin >> i){
        p->push_back(i);
    }
}
void f2(shared_ptr<vector<int>> p)
{
    for(int i : *p){
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    shared_ptr<vector<int>> p=f();
    f1(p);
    f2(p);
    return 0;
}
