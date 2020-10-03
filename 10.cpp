/*************************************************************************
	> File Name: 10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月09日 星期三 15时37分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    const int h=10;
    const auto a = 0;
    const int &b=a;
    decltype(b) c=h;
    std::cout << "b is " << b << "c is " << c << std::endl;
}
