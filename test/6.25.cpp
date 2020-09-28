/*************************************************************************
	> File Name: 6.25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月28日 星期一 11时26分20秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
inline string link(const string& s1,const string& s2)
{
    return s1+s2;
}
int main(int argc,char **argv)
{
    cout << link(argv[1],argv[2]) << endl;
    return 0;
}
