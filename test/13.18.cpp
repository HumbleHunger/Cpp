/*************************************************************************
	> File Name: 13.18.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 20时23分29秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class Employee {
    public:
    Employee():id(size),name(""){++size;cout << name << " " << id << endl;}
    Employee(const string& str):id(size),name(str){++size;cout << name << " " << id << endl;}
    Employee(const Employee& ep):id(size),name(ep.name){++size;cout << name << " " << id << endl;}
    static int size;
private:
    string name;
    int id;
};
int Employee::size=1;
int main()
{
    Employee a("asd");
    Employee b("asd");
    Employee c("asd");
    Employee d("asd");
    Employee e("asd");
    Employee f(a);
    Employee g(b);
    
    return 0;
}

