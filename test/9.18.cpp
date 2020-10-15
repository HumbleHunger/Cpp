/*************************************************************************
	> File Name: 9.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 20时03分33秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<deque>
#include<list>
using namespace std;
int main()
{
    list<string> dq;
    string word;
    auto iter=dq.begin();
    while(cin >> word){
        iter=dq.insert(iter,word);
    }
    cout << endl;
    while(iter != dq.end()){
        cout << *iter++ << endl;
    }
    return 0;
}
