#include <iostream>
using namespace std;
class base {
public:
    void f(int n){
        cout << "base" << "  " << n << endl;
    }
};
class der : public base{
public:
    void f(){
        cout << "dervasd" << endl;
    }
};
int main()
{
    base b;
    der d;
    b.f(10);
    d.f();
    d.base::f(10);
    return 0;

}

