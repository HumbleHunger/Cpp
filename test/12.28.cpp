/*************************************************************************
	> File Name: 12.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月28日 星期三 17时59分51秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<memory>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(int argc,char **argv)
{
    ifstream ifs(argv[1]);
    string line;
    vector<string> file;
    map<string,set<int>> word_line;
    while(getline(ifs,line)){
        istringstream istr(line);

        file.push_back(line);

    }
    while(1){
        cout << "insert word" << endl;
        string word;
        cin >> word;
        
    }
}
