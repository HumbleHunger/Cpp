/*************************************************************************
	> File Name: 9.14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月15日 星期四 16时16分41秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;
int main()
{
    //char c[10]="list";
    list<const char *> l{"list","sadasd"};
    vector<string> vs;
    vector<int> vi={1,2,3,4,5}; 
    vector<int> vi2={2,3,4,5};
    vs.assign(l.cbegin(),l.cend());
    swap(vi2,vi);
    cout << vi[0] << vi2[0] << endl << vs[0] << endl;
    return 0;
}
