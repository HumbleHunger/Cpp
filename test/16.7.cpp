#include <iostream>
using namespace std;
template <typename arry,int num> constexpr
int my_size(const arry (&a)[num])
{
    return num;
}
int main()
{
    char a[]={'a','b','c'};
    cout << my_size(a) << endl;
    return 0;
}

