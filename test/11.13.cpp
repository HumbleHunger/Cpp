/*************************************************************************
	> File Name: 11.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 18时22分03秒
 ************************************************************************/
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    map<string,vector<string>> m;
    string xing,ming;
    while(cin >> xing >> ming){
        m[xing].push_back(ming);
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
