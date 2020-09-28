/*************************************************************************
	> File Name: 3.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 20时50分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> v;
    string temp;
    while(cin >> temp){
        v.push_back(temp);
    }
    for(string a:v)
        cout << a << " ";
    cout << endl;
    for(decltype(v.size()) i=0;i<v.size();++i){
        cout << v[i] << " ";
    }
}
