/*************************************************************************
	> File Name: 6.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月27日 星期日 20时42分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
void reset(int &ip){
    ip=0;
}
int main()
{
    int i=2112;
    cout << i << endl;
    reset(i);
    cout << i << endl;
    return 0;
}
