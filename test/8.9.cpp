/*************************************************************************
	> File Name: 8.9.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 19时56分18秒
 ************************************************************************/

#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string s("sajdajdskadas dfjds sdf sfdsf  dsf s df sdf sdfsd fs");
    istringstream ist(s);
    char ch;
    while(ist >> ch){cout << ch;}
    return 0;
}
