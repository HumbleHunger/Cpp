/*************************************************************************
	> File Name: 6.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月27日 星期日 19时52分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fact(int a)
{
    int cnt=1;
    for(int i=1;i<=a;i++){
        cnt*=i;
    }
    return cnt;
}
int main()
{
    cout << "输入数字" << endl;
    int a=0;
    cin >> a;
    cout << fact(5) << endl;
}
