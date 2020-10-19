/*************************************************************************
	> File Name: 9.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 20时34分19秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
void f(string &s,const string &olds,const string &news)
{
    auto iter=s.begin();
    while(iter!=s.end()){
        if(*iter==olds[0] && olds==string(iter,iter+3)){
            s.replace(iter,iter+3,news);
            break;
        }
        ++iter;
    }
}
int main()
{
    string s("aaaathothru");
    string s1("tho");
    string s2("though");
    string s3("thr");
    string s4("through");
    f(s,s1,s2);
    cout << s << endl;
    f(s,s3,s4);
    cout << s << endl;
    return 0;
}
