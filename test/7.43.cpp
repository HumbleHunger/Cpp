/*************************************************************************
	> File Name: 7.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月11日 星期日 17时46分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A {
public:
    A(int i):a(i){cout << a << endl;}
private:
    int a;
};
class B {
public:
    B():m(0){}
private:
    A m;
};
int main()
{
   B p; 
}
