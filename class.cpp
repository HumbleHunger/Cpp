/*************************************************************************
	> File Name: class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月14日 星期一 22时21分58秒
 ************************************************************************/

#include<iostream>
#include"class.h"
using namespace std;
void test::test1(int i)
{
    a=i;
    cout << a << endl;
    cout << this << endl;
}
test::~test()
{
    cout << "in ~test" << endl;
    cout << a << endl;
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
        test *p=new test[5];
        /*for(int i=0;i<5;i++){
            p[i].test1(i);
        }*/
        //p--;
        delete []p;
    }
}
