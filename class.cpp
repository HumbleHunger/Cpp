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

}
test::~test()
{

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
