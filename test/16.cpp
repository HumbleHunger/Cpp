#include <iostream>
using namespace std;
template<typename T>
void func1(T & a)
{
    cout << a << "func1左值" << endl;
}
template<typename T>
void func1(T && a)
{
    //a=1;
    cout << a << "func1右值" << endl;
}
template<typename T>
void func(T &&a)
{
    func1(a);
    func1(forward<T>(a));
}
int main()
{
    const int num=2020;
    func1(move(num));
    int a=num;
    cout << num << endl;
    return 0;
}

