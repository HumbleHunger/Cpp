/*************************************************************************
	> File Name: 9.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 22时20分40秒
 ************************************************************************/

#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> fl={1,2,3,4,5,6,7,8,9,10};
    auto prev=fl.before_begin();
    auto curr=fl.begin();
    while(curr != fl.end()){
        if(*curr % 2 != 0){
            curr=fl.erase_after(prev);
        }
        else{
            prev=curr;
            ++curr;
        }
    }
    for(int i : fl){
        cout << i << " ";
    }
    return 0;
}
