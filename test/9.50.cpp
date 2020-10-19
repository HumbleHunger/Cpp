/*************************************************************************
	> File Name: 9.50.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 22时21分03秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> v={"12","32","43","1","45"};
    int count=0;
    for(string n : v){
        count+=stoi(n);
    }
    cout << count << endl;
    return 0;
}
