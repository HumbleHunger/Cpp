/*************************************************************************
	> File Name: 8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月08日 星期二 19时43分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
int j=0;
int main()
{
    const int b=0;
    constexpr int a=b;
    constexpr int *p1=&j;
    const int c=b;
    const int *const p=&a;
    std::cout << "a is " << a << "&a is " << &a << "p is " << (*p) << std::endl;
    return 0;
}
