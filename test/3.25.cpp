/*************************************************************************
	> File Name: 3.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月29日 星期二 19时42分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector<int> v(begin(a),end(a));
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
    const int grade=100;
    int temp=0;
    auto it=v.begin();
    while(cin >> temp){
        if(temp<=grade){
            ++*(it+temp/10);
        }
    }
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
