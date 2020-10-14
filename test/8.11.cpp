/*************************************************************************
	> File Name: 8.11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 20时24分30秒
 ************************************************************************/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector; using std::string; using std::ifstream; using std::istringstream; using std::cout; using std::endl; using std::cerr;

int main()
{
	ifstream ifs("1");
	if (!ifs)
	{
		cerr << "No data?" << endl;
		return -1;
	}

	vector<string> vecLine;
	string line;
	while (getline(ifs, line))
		vecLine.push_back(line);

	for (auto &s : vecLine)
	{
		istringstream iss(s);
		string word;
		while (iss >> word)
			cout << word << ", ";
		cout << endl;
	}

	return 0;
}
