/*************************************************************************
	> File Name: 9.44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 20时34分19秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
void f(string &s,const string &olds,const string &news)
{
    auto size=s.size();
    decltype(size) id=0;
    while(id!=size){
        if(s[id]==olds[0]){
            if(olds==s.substr(id,3)){
                s.replace(id,3,news);
                break;
            }
        }
        id++;
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
