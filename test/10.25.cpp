/*************************************************************************
	> File Name: 10.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 16时01分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace placeholders;
bool f(const string &s,string::size_type sz)
{
    if(s.size() >= sz){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    vector<string> v={"sdfgfd","sfsd","dfggdsg","sd","fef","qwe","fdgdbfd000"};
    auto iter=partition(v.begin(),v.end(),bind(f,_1,5));
    while(iter != v.end()){
        cout << *iter << endl;
        ++iter;
    }
    return 0;
}
