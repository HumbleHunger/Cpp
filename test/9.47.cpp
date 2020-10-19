/*************************************************************************
	> File Name: 9.47.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 22时09分26秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s("ab2c3d7R4E6");
    string num("23467");
    string ch("abcdRE");
    string::size_type pos=0;
    while((pos = s.find_first_of(num,pos))!=string::npos){
        cout << s[pos] << endl;
        ++pos;
    }
    pos=0;
    while((pos = s.find_first_of(ch,pos))!=string::npos){
        cout << s[pos] << endl;
        ++pos;
    }
}
