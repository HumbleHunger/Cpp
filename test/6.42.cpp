/*************************************************************************
	> File Name: 6.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月05日 星期一 14时27分55秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string make_plural(size_t ctr,const string &word,const string &ending="s")
{
    return ctr>1 ? word+ending:word;
}
int main()
{
    string s1("success");
    string s2("failure");
    cout << make_plural(2,s1,"oop") << endl;
    cout << make_plural(2,s2) << endl;
    return 0;

}
