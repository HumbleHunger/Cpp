/*************************************************************************
	> File Name: 11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月09日 星期三 16时12分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a=3,b=4;
    decltype(a) c=a;
    decltype((b)) d=a;
    ++c;
    ++d;
    std::cout << a << b << c << d << std::endl;
}
