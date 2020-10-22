/*************************************************************************
	> File Name: 10.24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 15时54分39秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace placeholders;
bool f(const string &s,const int &sz)
{
    if(s.size() > sz){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    vector<int> v={9,8,7,45,456,123,1,21,54,4,5,1,212,1,65,465};
    string s("asfsafsadasasdsaffdsfsdfdsfds");
    auto iter=find_if(v.begin(),v.end(),bind(f,s,_1));
    cout << *iter << endl;
    return 0;
}
