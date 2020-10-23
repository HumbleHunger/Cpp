/*************************************************************************
	> File Name: 10.36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 16时22分48秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    list<int> l={0,1,0,1,0,1,0,1,2,121,1,31,665,0,666,1,1,2,12};
    int a=0;
    auto iter=find(l.crbegin(),l.crend(),a);
    cout << *++iter << endl; 
    return 0;
}
