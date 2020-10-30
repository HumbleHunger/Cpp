/*************************************************************************
	> File Name: 9.33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 17时16分05秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto begin = v.begin();
	while (begin != v.end())
	{
		++begin;
		/*begin = */v.insert(begin, 42);
		++begin;
	}

	for (auto i : v)
		cout << i << " ";

	return 0;
}
