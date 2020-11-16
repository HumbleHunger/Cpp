#include <iostream>
using namespace std;
class base {
public:
    base(){
        cout << "base::base()" << endl;
    }
    ~base(){
        cout << "base::~base()" << endl;
    }
private:
    
};
class derived :public base {
public:
    derived()=default;
    ~derived(){
        cout << "derived::~derived()" << endl;
    }

};
int main()
{
    derived a;
    return 0;
}

