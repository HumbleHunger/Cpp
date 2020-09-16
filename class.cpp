/*************************************************************************
	> File Name: class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月14日 星期一 22时21分58秒
 ************************************************************************/

#include<iostream>
#include"class.h"
using namespace std;
test::test()
{
    a=10;
    cout << a << endl;
    cout << this << endl;
}
test::~test()
{
    cout << "in ~test" << endl;
}
void test::add()
{
    a++;
}
void test::del()
{
    a--;
}
void test::print()
{
    cout << a << endl;
}
void test::insert(int b)
{
    a=b;
}
int main()
{
    {
        test q[2];
    }
}
