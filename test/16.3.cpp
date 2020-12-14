#include <iostream>

using namespace std;
template <typename T>
class Bob{
public:
    friend T;
private:
    int a=2020;
};
class sale {
public :
    int a=0;
    void f(Bob<sale> &s){
        cout << s.a  << endl;
    }
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
    Bob<sale> a;
    sale b;
    b.f(a);
    return 0;
}

