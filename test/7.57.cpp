/*************************************************************************
	> File Name: 7.57.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月14日 星期三 15时36分15秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class Account {
public:
    Account():owner(""),amount(0){}
    void cal(){amount += amount * rate;}
    void add(double num){amount += num;}
    void print(){cout << rate << " " << amount << endl;}
    static void change_rate(double new_rate){rate=new_rate;}
private:
    string owner;
    double amount;
    static const int zz=20;
    static double rate;
};
double Account::rate = 0.05;
int main()
{
    Account a;
    double num=0;
    cin >> num;
    a.add(num);
    cout << "one year later\n";
    a.cal();
    a.print();
    a.change_rate(0.06);
    cout << "one year later\n";
    a.cal();
    a.print();
    return 0;
}
