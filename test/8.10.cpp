/*************************************************************************
	> File Name: 8.10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 20时04分26秒
 ************************************************************************/

#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main(int argc,char **argv)
{
    ifstream ifs("1");
    string line;
    vector<string> v;
    while(getline(ifs,line)){
        v.push_back(line);
    }
    cout << v.size() << endl;
    istringstream ists;
    for(auto &s : v){
        ists.str(s);
        string word;
        while(ists >> word){
            cout << word << ",";
        }
        ists.clear();
        cout << endl;
    }
}
