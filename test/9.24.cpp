/*************************************************************************
	> File Name: 9.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 21时08分22秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    cout << v.front() << endl;
    cout << *v.begin() << endl;
    return 0;
}
