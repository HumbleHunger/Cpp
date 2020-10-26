/*************************************************************************
	> File Name: 12.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月26日 星期一 20时29分54秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
using namespace std;
vector<int> *f()
{
    vector<int> *p=new(vector<int>);
    return p;
}
void f1(vector<int> *p)
{
    int i=0;
    while(cin >> i){
        p->push_back(i);
    }
}
void f2(vector<int> *p)
{
    for(int i : *p){
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> *p=f();
    f1(p);
    f2(p);
    return 0;
}
