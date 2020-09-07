/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月07日 星期一 20时34分14秒
 ************************************************************************/

#include<iostream>
#include"1.h"
using namespace std;
extern const int size=100;
int main()
{
    int a=2;
    int &y=a;
    int *p=&y;
    std::cout << "a is " << *p << std::endl;
    print();
    return 0;
}
