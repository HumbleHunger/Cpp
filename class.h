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
    test(int i):a(i){cout << a << "in test" << endl;};
    ~test();
    void test1(int i);
    void add();
    void del();
    void print();
protected:
    void insert(int b);
private:
    int a;
    test():a(10){cout << a << "in test" << endl;};
};
class sub : public test {
public:
    void set(int i){
        cout << "in set" <<endl;
        insert(i);
    }
    sub(int i):test(i){}
};
class group {
private:
    sub s;
public:
    group():s(10086){
        cout << "in group create" << endl;
    }
};
#endif
