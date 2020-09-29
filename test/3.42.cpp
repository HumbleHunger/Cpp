/*************************************************************************
	> File Name: 3.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月29日 星期二 21时01分08秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int temp=0;
    for(int i=0;i<5;++i){
        cin >> temp;
        v.push_back(temp);
    }
    int a[5];
    int i=0;
    for(auto it=v.begin();it!=v.end();++i,++it){
        a[i]=*it;
        cout << a[i] << " ";
    }
    cout << endl;
}
