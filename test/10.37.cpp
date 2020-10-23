/*************************************************************************
	> File Name: 10.37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 16时31分29秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    vector<int> v={0,1,2,3,4,5,6,7,8,9};
    auto iter=v.begin()+3;
    auto iter1=v.begin()+8;
    list<int> l(5);
    copy(iter,iter1,l.rbegin());
    for(int a : l){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
