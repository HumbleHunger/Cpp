/*************************************************************************
	> File Name: 9.26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 21时50分32秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v;
    list<int> l;
    for(int i : ia){
        v.push_back(i);
        l.push_back(i);
    }
    auto iter=v.begin();
    while(iter != v.end()){
        if(*iter % 2 == 0){
            iter=v.erase(iter);
        }
        else{
            ++iter;
        }
    }
    auto iters=l.begin();
    while(iters != l.end()){
        if(*iters % 2 != 0){
            iters=l.erase(iters);
        }
        else{
            ++iters;
        }
    }
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : l){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
