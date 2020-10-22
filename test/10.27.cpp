/*************************************************************************
	> File Name: 10.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 16时38分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,1,1,1,1,2,1,1,11,13,1};
    vector<int> v1;
    v1.resize(10);
    unique_copy(v.cbegin(),v.cend(),v1.begin());
    for(int a : v1){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
