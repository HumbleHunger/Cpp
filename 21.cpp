/*************************************************************************
	> File Name: 21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 19时27分42秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
char &f(string& s,string::size_type i)
{
    return s[i];
}
int main()
{
    string s("hallo");
    cout << s << endl;
    decltype(s.size()) i=0;
    f(s,i)='H';
    cout << s << endl;
    return 0;
}
