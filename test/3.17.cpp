/*************************************************************************
	> File Name: 3.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 21时21分09秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void change(vector<string> &v)
{
    for(string &s : v){
        for(char &temp : s){
            if(temp>90){
                temp-=32;
            }
        }
    }
}
int main()
{
    string temp;
    vector<string> v;
    while(cin >> temp){
        v.push_back(temp);
    }
    change(v);
    for(string temp : v){
        cout << temp << endl;
    }
    return 0;
}
