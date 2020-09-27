/*************************************************************************
	> File Name: class.h
	> Author: 
	> Mail: 
	> Created Time: 2020年09月14日 星期一 22时22分05秒
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H
#include<iostream>
using namespace std;
class test {
public:
    test(int i);
    ~test();
    const test operator+(const test&)const;
    void test1(int i);
    void add();
    void del();
    void print();
private:
    static int b;
public:
    void insert(int b);
    int a;
    test():a(10){b=0;cout << a << "in test" << endl;};
};
inline test::test(int i):a(i){b=0;cout << b << "in test" << endl;};

class sub : public test {
public:
    void set(int i);
    void print(){cout << "print is " << a << endl;}
    int f(int i);
    int f(int i,int j=10);
    sub(int i):test(i){}
};
inline void sub::set(int i){
    cout << "in set" <<endl;
    insert(i);
}
inline int sub::f(int i){
    cout << "in sub f1" << endl;
    return 0;
}
inline int sub::f(int i,int j){
    cout << "in sub f2" << i << "  " << j << endl;
    return 0;
}

class group {
private:
    sub s;
public:
    group():s(10086){
        cout << "in group create" << endl;
    }
};
#endif
