/*************************************************************************
	> File Name: 12.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月28日 星期三 15时32分08秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<new>
#include<memory>
using namespace std;
int main()
{
    char *ch=new char[100]();
    const char *s1="hello";
    const char *s2=" world";
    sprintf(ch,"%s%s",s1,s2);
    cout << ch << endl;
    return 0;
}
