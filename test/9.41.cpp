/*************************************************************************
	> File Name: 9.41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 20时08分25秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<char> v={'h','a','l','l','o'};
    string s(v.cbegin(),v.cend());
    for(char c : s){
        cout << c << " ";
    }
}
