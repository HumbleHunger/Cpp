/*************************************************************************
	> File Name: 11.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 17时45分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<map>
using namespace std;
int main()
{
    map<string,list<int>> m;
    string word;
    int line;
    while(cin >> word >> line){
        m[word].push_back(line);
    }
    for(const auto &a : m){
        cout << a.first << " :";
        for(const auto &i : a.second){
            cout << i << ",";
        }
        cout << endl;
    }
    return 0;
}
