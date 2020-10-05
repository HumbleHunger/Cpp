/*************************************************************************
	> File Name: 6.39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月05日 星期一 13时14分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int *p)
{
    *p=10;
    return *p;
}
double f(double *p)
{
    *p=20;
    return *p;
}
int main()
{
    int a=1;
    double b=2;
    double q=f(&a);
    cout << q << endl;
    double p=f(&b);
    cout << p << endl;
    return 0;
}
