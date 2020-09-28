/*************************************************************************
	> File Name: 3.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 22时40分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(vector<int> &v)
{
    for(auto it=v.begin();it!=v.end();++it){
        if(it+10 == v.end()){
            cout << "yes";
        }
        else{
            cout << *(it+10) << "no" << endl;

        }
        *it*=2;
    }
}
int main()
{
    int temp=0;
    vector<int> v;
    while(cin >> temp){
        v.push_back(temp);
    }
    for(auto it=v.begin();it!=v.end();++it){
        cout << *it << " ";
    }
    f(v);
    for(auto it=v.begin();it!=v.end();++it){
        cout << *it << " ";
    }
}
