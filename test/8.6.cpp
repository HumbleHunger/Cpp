/*************************************************************************
	> File Name: 8.6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 18时00分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class data;
istream &read(istream &i,data &a);
class data {
public:
    data():data("",0,0){cout << "data()" << endl;};
    data(const string &s):data(s,0,0){cout << "data(1)" << endl;}
    data(istream &i):data(){
        read(i,*this);
        cout << "data(is)" << endl;
    }
    data(const string &s,int n,double m):bookNo(s),num(n),money(m){cout << "data(3)" << endl;}
    void print(ostream &o){
        o << this->bookNo << " " << this->num << " " << this->money << endl;
    }
    void test(const data &a){
        cout << a.bookNo << endl;
    }
    string bookNo;
    int num=0;
    double money=0;
};
istream &read(istream &i,data &a)
{
    double p=0;
    i >> a.bookNo >> a.num >> p;
    a.money=a.num*p;
    return i;
}
int main(int argc,char **argv)
{
    vector<data> v;
    ifstream ifs(argv[1]);
    data d;
    while(read(ifs,d)){
        v.push_back(d);
    }
    cout << v.size() << endl;
    ofstream ofs(argv[2],ofstream::app);
    for(data q : v){
        q.print(ofs);
    }
    return 0;
}
