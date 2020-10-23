/*************************************************************************
	> File Name: 10.41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 17时37分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    list<string> l={"asd","sad","asd","asd","sadsadas1","dsfs"};
    l.sort();
    l.unique();
    for(string s : l){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
