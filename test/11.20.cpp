/*************************************************************************
	> File Name: 11.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 21时22分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    string word;
    while(cin >> word){
        auto ret=m.insert({word,1});
        if(!ret.second){
            ++ret.first->second;
        }
    }
    for(auto &a : m){
        cout << a.first << " is " << a.second << endl;
    }
    return 0;
}
