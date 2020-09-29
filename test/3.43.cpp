/*************************************************************************
	> File Name: 3.43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月29日 星期二 21时29分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int (&w)[3]: a){
        for(int n : w){
            cout << n << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
