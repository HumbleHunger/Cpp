/*************************************************************************
	> File Name: 10.1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月21日 星期三 19时01分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    vector<string> v={"aaa","aaa","aaa","aaa","aaa","dfsfsd","fdgfdgd","Dfdg"};
    cout << count(v.cbegin(),v.cend(),"aaa") << endl;
    return 0;

}
