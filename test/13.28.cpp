/*************************************************************************
	> File Name: 13.28.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月02日 星期一 14时29分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
class TreeNode {
private:
    string value;
    int count;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(const string &s=string("")):value(s),count(0){}
}
