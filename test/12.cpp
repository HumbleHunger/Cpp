/*************************************************************************
	> File Name: 12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月26日 星期一 21时04分13秒
 ************************************************************************/

#include<iostream>
#include<memory>
using namespace std;
int main()
{
    shared_ptr<int> p(new int(1));
    {
        shared_ptr<int> q(p);
    }
    cout << *p << endl;
}
