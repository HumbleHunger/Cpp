/*************************************************************************
	> File Name: 10.34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 16时11分16秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    auto iter=v.end();
    while(--iter != v.begin()-1){
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
