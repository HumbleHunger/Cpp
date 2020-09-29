/*************************************************************************
	> File Name: 3.40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月29日 星期二 20时27分26秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[]="hello";
    char b[]="world";
    char c[100];
    strcpy(c,a);
    strcat(c,b);
    printf("%s\n",c);
}
