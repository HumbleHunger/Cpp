#include <iostream>
using namespace std;
class sale {
public :
    int a=0;
};
template <class T>
int compared(const T& a,const T& b)
{
    if(a>b) return 1;
    if(a<b) return -1;
    return 0;
}
int main()
{
    sale a,b;
    compared(a,b);
    return 0;
}

