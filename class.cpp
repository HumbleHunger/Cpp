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
    /*{
        sub *p=new sub[5];
        for(int i=0;i<5;i++){
            p[i].test1(i);
        }
        //p[0].insert(999);
        p[0].set(1000);
        //p--;
        delete []p;
    }*/
    //sub p(1890);
    //p.f(1);
    //test *zz=(test *)&p;
    
    //p.f(2,22);
    //zz->print();
    //group h;
    //test q(455);
    //const test& y=f();
    //test* z=&q;
    test q,w;
    q.insert(119);
    w.print();
    w.insert(110);
    q.print();
    //y.print();
    //y.print();
    //y.b=20;
    //f()=q;
    //f().print();
    //cout << "f().b is "<< f().b << " over"<< endl;




}
