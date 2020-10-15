/*************************************************************************
	> File Name: 9.20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 20时26分53秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<deque>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5,6,7,8,9,10};
    deque<int> dqd,dqs;
    auto iter=l.begin();
    while(iter != l.end()){
        if(*iter%2==0){
            dqs.push_back(*iter++);
        }
        else{
            dqd.push_back(*iter++);
        }
    }
    for(auto i : dqd)
        cout << i << " ";
    cout << endl;
    for(auto i : dqs)
        cout << i << " ";
    cout << endl;
    return 0;
}
