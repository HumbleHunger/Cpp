/*************************************************************************
	> File Name: 6.17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月27日 星期日 21时15分57秒
 ************************************************************************/

#include<iostream>
#include<string>
//using std::string;
using namespace std;
bool Is_A(const string &s)
{
    auto num=s.size();
    for(decltype(num) i=0;i<num;++i){
        if(s[i]<=90){
            return true;
        }
    }
    return false;
}
void change(string& s)
{
    auto num=s.size();
    for(decltype(num) i=0;i<num;++i){
        if(s[i]<=90){
            s[i]+=32;
        }
    }
}
int main()
{
    string s("ABCabc");
    if(Is_A(s)==true){
        cout << "string have A" << endl;
    }
    change(s);
    cout << s << endl;
    return 0;
}
