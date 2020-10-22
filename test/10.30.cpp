/*************************************************************************
	> File Name: 10.30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 18时30分58秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    istream_iterator<int> in(cin),eof;
    ostream_iterator<int> out(cout," ");
    vector<int> v(10);
    copy(in,eof,v.begin());
    sort(v.begin(),v.end());
    for(int a : v){
        out=a;
    }
    return 0;
}
