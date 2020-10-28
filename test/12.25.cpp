/*************************************************************************
	> File Name: 12.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月28日 星期三 16时41分30秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=3;
    allocator<string> allo;
    auto p=allo.allocate(n);
    auto q=p;
    string s;
    while(cin >> s && p!=q+n){
        allo.construct(p++,s);
    }
    while(p!=q){
        cout << *--p << endl;
        allo.destroy(p);
    }
    allo.deallocate(q,3);
    return 0;

}
