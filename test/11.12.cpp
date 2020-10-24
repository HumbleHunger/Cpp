/*************************************************************************
	> File Name: 11.12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 18时14分14秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    vector<pair<string,int>> v;
    string str;
    int i=0;
    while(cin >> str >> i){
        pair<string,int> p(str,i);
        v.push_back(p);
    }
    for(auto &a : v){
        cout << a.first << " is " << a.second << endl;
    }
    return 0;
}
