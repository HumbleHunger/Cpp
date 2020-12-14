#include <iostream>
using namespace std;
template <int a,int b>
void f()
{
    cout << a << b << endl;
}
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    f<1,2>();
    return 0;
}

