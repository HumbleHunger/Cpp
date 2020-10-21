/*************************************************************************
	> File Name: 10.3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月21日 星期三 19时10分54秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<double> v={1.654651,2.6465,3.56465};
    cout << accumulate(v.cbegin(),v.cend(),double(0)) << endl;
    return 0;
}
