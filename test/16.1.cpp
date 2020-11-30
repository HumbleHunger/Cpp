#include <iostream>
using namespace std;
template <class T>
int compared(const T& a,const T& b)
{
    if(a>b) return 1;
    if(a<b) return -1;
    if(a==b) return 0;
}
int main()
{
    cout << compared(1,2) << endl;
    return 0;
}

