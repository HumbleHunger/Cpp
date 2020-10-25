/*************************************************************************
	> File Name: 11.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月25日 星期日 15时36分57秒
 ************************************************************************/
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main()
{
    multimap<string,string> m{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };
    map<string,multiset<string>> ms;
    for(const auto &a : m){
        ms[a.first].insert(a.second);
    }
    for(const auto &a : ms){
        cout << a.first <<  ": ";
        for(const auto &z : a.second){
            cout << z << " ";
        }
        cout << endl;
    }
    return 0;
}
