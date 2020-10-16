/*************************************************************************
	> File Name: 9.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 21时44分57秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={0,1,2,3,4,5,6,7,8,9};
    auto i1=v.begin(),i2=v.begin();
    v.erase(i1,i2);
    cout << v[0] << endl;
    i2++;
    v.erase(i1,i2);
    cout << v[0] << endl;
   return 0; 
}
