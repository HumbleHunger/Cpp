#include <iostream>
#include <functional>
using namespace std;
class C
{
public:
    int operator()(int a1, int a2)
    {  //重载()运算符
        return (double)(a1 + a2) / 3;
    }
};

int f(int a,int b)
{
    return a+b;
}
int main()
{
    function<int(int,int)> f1=f;
    function<int(int,int)> f2=C();
    
    return 0;
}

