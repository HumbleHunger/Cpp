/*************************************************************************
	> File Name: 11.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 21时39分41秒
 ************************************************************************/
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    multimap<string,string> m;
    string xing,ming;
    while(cin >> xing >> ming){
        m.insert({xing,ming});
    }
    for(const auto &a : m){
        cout << a.first <<  " :" << endl;
        for(const auto &s : a.second){
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
