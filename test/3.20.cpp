/*************************************************************************
	> File Name: 3.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 21时36分44秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void f1(const vector<int> &v)
{
    int count=0;
    for(vector<int>::const_iterator temp=v.begin();temp!=v.end();++temp){
        count+=*temp;
        if(count>*temp){
            cout << count << " ";
            count=*temp;
        }
    }
    cout << endl;
}
void f2(const vector<int> &v)
{
    int i=1;
    for(auto it=v.begin();it!=v.begin()+v.size()/2;++it,++i){
        cout << *it+*(v.end()-i) << " ";
    }
}
int main()
{
    int temp=0;
    vector<int> v;
    while(cin >> temp){
        v.push_back(temp);
    }
    f1(v);
    f2(v);
}
