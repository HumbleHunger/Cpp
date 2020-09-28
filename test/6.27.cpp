/*************************************************************************
	> File Name: 6.27.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 18时32分54秒
 ************************************************************************/

#include<iostream>
#include<initializer_list>
using namespace std;
void f()
{
    cout << "it is f" << endl;
}
void count(initializer_list<int> a)
{
    int sum=0;
    for(auto p=a.begin();p!=a.end();++p){
        sum+=*p;
    }
    cout << sum << endl;
    return f();
}
int main()
{
    
    count({1,2,3,4,5,6,7});

}
