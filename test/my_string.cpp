/*************************************************************************
	> File Name: my_string.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月04日 星期三 15时46分24秒
 ************************************************************************/

#include<iostream>
#include"my_string.h"
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    vector<String> v;
    char c[20];
    memset(c,0,sizeof(c));
    while(cin >> c){
        v.push_back(c);
        memset(c,0,sizeof(c));
    }
}
