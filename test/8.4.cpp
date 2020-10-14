/*************************************************************************
	> File Name: 8.4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 17时20分09秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs("1");
    vector<char> v;
    char s;
    while(ifs >> s){
        v.push_back(s);
    }
    for(char ss : v){
        cout << ss << endl;
    }
    return 0;
}
