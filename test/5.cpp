#include <iostream>
#include <vector>
using namespace std;
struct r{
    string &s;
    r(string &a):s(a){}
};
template <typename T>
void d(T&& val)
{
    cout << val << &val << endl;
}
int main()
{
    /*
    int a=1000;
    int && k = move(a);
    k=10;
    cout << k << endl;
    int b=move(a);
    b=99;
    string s1("sad");
    cout << s1 << endl;
    string && p=move(s1);
    string s2=p;
    p="Awq";
    cout << s1 << " "  << s2 << " " << p << endl;
    cout << a << b<< endl;
    */
    d(10);
    int a;
    int &b=a;
    cout << &a << " " << &b << endl;
    return 0;
}

