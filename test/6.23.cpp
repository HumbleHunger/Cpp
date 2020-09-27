/*************************************************************************
	> File Name: 6.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月27日 星期日 22时30分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
void print(const int *beg,const int *end)
{
    while(beg!=end){
        cout << *beg++ << endl;
    }
}
void print(const int *a,int size)
{
    for(int i=0;i<size;++i){
        cout << a[i] << " " << endl;
    }
}
void print(const int a[10])
{
    //while(auto elem : a){
    //    cout << elem << endl;
    //}
    for(int i=0;i<10;++i){
        cout << a[i] << " " << endl;
    }
}
int main()
{
    int a[3]={1,2,3};
    print(begin(a),end(a));
    print(a,3);
    print(a);
    return 0;
}
