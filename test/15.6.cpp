/*************************************************************************
	> File Name: 15.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月04日 星期三 22时07分14秒
 ************************************************************************/

#include<iostream>
#include"15.3.h"
using namespace std;
void print_total(ostream &os,const Quote &item,size_t n)
{
    os << item.isbn() << "  " << n << "  " << item.net_price(n);
}
int main()
{
    int n;
    cin >> n;
    new_quote bq("123-1we-3",10.0,0.7,5);
    print_total(cout,bq,n);
    return 0;
}
