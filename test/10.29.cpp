/*************************************************************************
	> File Name: 10.29.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月22日 星期四 18时09分47秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<iterator>
using namespace std;
int main()
{
    ifstream ifs("1");
    istream_iterator<string> initer(ifs),eof;
    vector<string> v;
    auto insert_iter=back_inserter(v);
    while(initer != eof){
        insert_iter=*initer++;
    }
    for(string &s : v){
        cout << s << " ";
    }
    cout << endl;
}
