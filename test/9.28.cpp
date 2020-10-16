/*************************************************************************
	> File Name: 9.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 22时36分13秒
 ************************************************************************/

#include<iostream>
#include<forward_list>
#include<string>
using namespace std;
void f(forward_list<string> &fl,const string &s1,const string &s2)
{
    auto prev=fl.before_begin();
    auto curr = fl.begin();
    while(curr != fl.end()){
        cout << "1" << endl;
        if(*curr == s1){
            fl.insert_after(curr,s2);
            return;
        }
        else{
            prev=curr;
            ++curr;
        }
    }
    cout << "exit";
    fl.insert_after(prev,s2);
}
int main()
{
    forward_list<string> fl{"hello","world","sadas","fghrgthrgth","gerwerqw"};
    /*auto iter = fl.begin();
    while(iter != fl.end()){
        cout << *iter++ << endl;
    }*/
    string s1("sadas");
    string s2("pppppppppppppp");
    string s3("qqq");
    /*f(fl,s1,s2);
    auto curr = fl.begin();
    while(curr != fl.end()){
        cout << *curr << endl;
        ++curr;
    }*/
    f(fl,s3,s2);
    auto currs = fl.begin();
    while(currs != fl.end()){
        cout << *currs << endl;
        ++currs;
    }
    return 0;
}
