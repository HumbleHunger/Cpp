/*************************************************************************
	> File Name: 6.12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月27日 星期日 20时47分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
void swag(int &a,int &b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    cout << "a= " << a << "b= " << b << endl;
    swag(a,b);
    cout << "a= " << a << "b= " << b << endl;
}
