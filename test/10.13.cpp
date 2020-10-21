/*************************************************************************
	> File Name: 10.13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月21日 星期三 20时10分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool f(const string &s)
{
    if(s.size() >= 5){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    vector<string> v={"sdfgfd","sfsd","dfggdsg","sd","fef","qwe","fdgdbfd000"};
    auto iter=partition(v.begin(),v.end(),f);
    while(iter != v.end()){
        cout << *iter << endl;
        ++iter;
    }
    return 0;
}
