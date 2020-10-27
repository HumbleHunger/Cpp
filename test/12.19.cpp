/*************************************************************************
	> File Name: 12.19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月27日 星期二 21时49分19秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include"12.19.h"
using namespace std;
int main()
{
    ifstream ifs("1");
    StrBlob sb;
    string word;
    while(ifs >> word){
        sb.push_back(word);
    }
    StrBlobPtr sbp(sb);

    while(sbp!=sb.end()){
        cout << sbp.deref() << " ";
        sbp.incr();
    }
    cout << endl;
    return 0;
}
