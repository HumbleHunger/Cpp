/*************************************************************************
	> File Name: 11.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 16时34分19秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> m;
    string word;
    while(cin >> word){
        ++m[word];
    }
    for(const auto &a : m){
        cout << a.first << " is " << a.second << endl;
    }
    return 0;
}
