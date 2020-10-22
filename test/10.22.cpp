/*************************************************************************
	> File Name: 10.22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 15时46分30秒
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
    if(s.size() <= sz){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    vector<string> v={"sdfgfd","sfsd","dfggdsg","sd","fef","qwe","fdgdbfd000"};
    auto iter=partition(v.begin(),v.end(),bind(f,_1,3));
    while(iter != v.end()){
        cout << *iter << endl;
        ++iter;
    }
    return 0;
}
