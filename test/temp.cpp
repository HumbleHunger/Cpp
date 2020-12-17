#include <iostream>
using namespace std;
template <typename T>
T f(T *a,T *b)
{
    a=1;
    b=2;
    return a+b;
}
int main()
{
    const int a=0;
    const int b=0;
    f(&a,&b);
    std::cout << "Hello world" << std::endl;
    return 0;
}

