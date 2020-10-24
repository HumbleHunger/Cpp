/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年10月24日 星期六 21时58分07秒
 ************************************************************************/
#include <iostream>
#include <map>
#include <string>

using std::string;
using std::multimap;
using std::cin;
using std::endl;

int main()
{
	multimap<string, string> families;
	for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
	for (auto const& family : families)
		std::cout << family.second << " " << family.first << endl;
}

