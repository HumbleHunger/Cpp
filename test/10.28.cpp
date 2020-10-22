/*************************************************************************
	> File Name: 10.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 16时45分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    list<int> v1;
    vector<int> v2,v3;
    auto iter=front_inserter(v1);
    copy(v.cbegin(),v.cend(),iter);
    copy(v.cbegin(),v.cend(),inserter(v2,v2.begin()));
    copy(v.cbegin(),v.cend(),back_inserter(v3));
    for(int a : v1){
        cout << a << " ";
    }
    cout << endl;
    for(int a : v2){
        cout << a << " ";
    }
    cout << endl;
    for(int a : v3){
        cout << a << " ";
    }

    cout << endl;
    return 0;
}
