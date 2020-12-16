#include <iostream>
using namespace std;
class DebugDelete {
public:
    DebugDelete(ostream &s = cerr):os(s){}
    template <typename T> void operator() (T *p){
        delete p;
        cout << "deleting unique_ptr" << endl;
    }
private:
    ostream &os;
};
int main()
{
    double* p = new double;
    DebugDelete b;
    b(p);
    return 0;
}

