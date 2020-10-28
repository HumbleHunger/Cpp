/*************************************************************************
	> File Name: 12.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月28日 星期三 15时51分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    char *sp=new char[5]();
    cin >> sp;
    cout << sp << endl;
    delete []sp;
    return 0;
}
