/*************************************************************************
	> File Name: 8.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月13日 星期二 18时14分35秒
 ************************************************************************/

#include<iostream>
#include<sstream>
using namespace std;
istream &f(istream &is)
{
    char a;
    while(is >> a){
        cout << a;
    }
    if(is.eof()){
        cout << "not good\n";
    }
    is.clear();
    if(is.eof()){
        cout << "good\n";
    }
    while(is >> a){
        cout << a;
    }
    return is;
}
int main()
{
    string s("sajdajdskadas dfjds sdf sfdsf  dsf s df sdf sdfsd fs");
    istringstream ist(s);
    f(ist);
    cout << "over\n";
    return 0;
}
