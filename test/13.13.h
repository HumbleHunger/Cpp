/*************************************************************************
	> File Name: 13.13.h
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 15时42分31秒
 ************************************************************************/

#ifndef _13.13_H
#define _13.13_H
class X {
public:
    X(){cout << "X()" << endl;}
    X(const X& x){cout << "X(const X& x)" << endl;}
    X& operator=(const X& x){i=x.i;}
    ~X(){cout << "~X()" << endl;}
private:
    int i;
};
#endif
