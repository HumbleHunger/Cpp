/*************************************************************************
	> File Name: 10.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月21日 星期三 21时40分46秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int i=5;
    auto f = [i](int a,int b) {return a+b+i;};
    int a=f(1,2);
    cout << a << endl;
    return 0;
}
