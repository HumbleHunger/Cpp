/*************************************************************************
	> File Name: 6.54.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月08日 星期四 21时21分43秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int f1(int a,int b)
{
    cout << "a+b=" << a+b << endl;
    return 0;
}
int f2(int a,int b)
{
    cout << "a-b=" << a-b << endl;
    return 0;
}
int f3(int a,int b)
{
    cout << "a*b=" << a*b << endl;
    return 0;
}
int f4(int a,int b)
{
    cout << "a/b=" << a/b << endl;
    return 0;
}
int main()
{
    vector<int (*)(int,int) > a;
    a.push_back(f1);
    a.push_back(f2);
    a.push_back(f3);
    a.push_back(f4);
    a[0](10,5);
    a[1](10,5);
    a[2](10,5);
    a[3](10,5);
    return 0;
}
