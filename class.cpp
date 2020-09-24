/*************************************************************************
	> File Name: class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月14日 星期一 22时21分58秒
 ************************************************************************/
#include<iostream>
#include"class.h"
using namespace std;
int test::b;
void test::test1(int i)
{
    a=i;
    cout << a << endl;
    cout << this << endl;
}
test::~test()
{
    cout << "in ~test" << endl;
    cout << b << endl;
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
    cout << "print is "<< b << "aaa" << endl;
}
void test::insert(int a)
{
    b=a;
    cout << "in insert" << b << endl;
}
test f()
{
    test a(123);

    return a;
}
int main()
{
    test q,w;
    q.insert(119);
    w.print();
    w.insert(110);
    q.print();




}
