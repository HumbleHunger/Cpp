/*************************************************************************
	> File Name: 9.42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 20时15分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    string s;
    s.reserve(100);
    char c;
    while(cin >> c){
        s.push_back(c);
        cout << c;
    }
    
    return 0;
}
