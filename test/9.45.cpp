/*************************************************************************
	> File Name: 9.45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 21时10分10秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string &f(string &s,const char *q,const char *h)
{
    auto iter=s.begin();
    s.insert(iter,'q');
    s.append(h);
    return s;
}
int main()
{
    string s("yu");
    //string q("liu");
    string h("ji");
    char q[10]="liu\0";
    cout << f(s,"liu\0","ji") << endl;
    return 0;
}
