/*************************************************************************
	> File Name: 14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月09日 星期三 17时35分17秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main()
{
    string s1;
    cin >> s1;
    string s2("  world");
    string s3(s1+s2);
    cout << s3 << endl;
    return 0;
}
