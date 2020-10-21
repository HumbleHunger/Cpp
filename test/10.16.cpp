/*************************************************************************
	> File Name: 10.16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月21日 星期三 21时44分03秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
void f(vector<string> &s,vector<string>::size_type sz)
{
    sort(s.begin(),s.end());
    auto iter=unique(s.begin(),s.end());
    s.erase(iter,s.end());
    stable_sort(s.begin(),s.end(),[](const string &a,const string &b) {return a.size()<b.size();});
    iter=stable_partition(s.begin(),s.end(),[sz](const string &a) {return a.size() < sz;});
    for_each(iter,s.end(),[](const string &a) {cout << a << " ";});
    cout << endl;
}
int main()
{
    vector<string> v={"fsfsdff","SDfdsf","SDfdfs","TRtrg","wwf","thrtrhrthtrh","gdf","dfgg","DFg"};
    f(v,5);
    return 0;
}
